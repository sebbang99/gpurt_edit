/*
 ***********************************************************************************************************************
 *
 *  Copyright (c) 2016-2024 Advanced Micro Devices, Inc. All Rights Reserved.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *
 **********************************************************************************************************************/

#pragma once

#include "core/hw/gfxip/pm4IndirectCmdGenerator.h"
#include "palInlineFuncs.h"

namespace Pal
{
namespace Gfx9
{

class Device;

// DISPATCH_MESH operations handle both mesh-only pipelines and task+mesh pipelines.
// In the case of mesh-only piplines we generate the following in the worst case:
//  + SET_SH_REG (3 registers)
//  + SET_SH_REG (1 register)
//  + NUM_INSTANCES
//  + DRAW_INDEX_AUTO
// For task+mesh pipelines, we generate the following on the gfx cmdStream:
//  + DISPATCH_TASKMESH_GFX
// For the ace cmdStream, we generate the following:
//  + SET_SH_REG (3 registers)
//  + DISPATCH_TASKMESH_DIRECT_ACE
constexpr uint32 Gfx10DispatchMeshCmdBufSize = (CmdUtil::ShRegSizeDwords + 3) +
                                               (CmdUtil::ShRegSizeDwords + 1) +
                                               CmdUtil::NumInstancesDwords    +
                                               CmdUtil::DrawIndexAutoSize;

// DISPATCH_MESH operations handle both mesh-only pipelines and task+mesh pipelines.
// In the case of mesh-only piplines we generate the following in the worst case:
//  + SET_SH_REG (1 register)
//  + NUM_INSTANCES
//  + DISPATCH_MESH_DIRECT
// For task+mesh pipelines, we generate the following on the gfx cmdStream:
//  + DISPATCH_TASKMESH_GFX
// For the ace cmdStream, we generate the following:
//  + SET_SH_REG (3 registers)
//  + DISPATCH_TASKMESH_DIRECT_ACE
constexpr uint32 Gfx11DispatchMeshCmdBufSize = (CmdUtil::ShRegSizeDwords + 3) +
                                               CmdUtil::DispatchTaskMeshDirectMecSize;

// DRAW_INDEX_AUTO operations generate the following PM4 packets in the worst case:
//  + SET_SH_REG (2 registers)
//  + SET_SH_REG (1 register)
//  + NUM_INSTANCES
//  + DRAW_INDEX_AUTO
constexpr uint32 DrawIndexAutoCmdBufSize     = (CmdUtil::ShRegSizeDwords + 2) +
                                               (CmdUtil::ShRegSizeDwords + 1) +
                                               CmdUtil::NumInstancesDwords    +
                                               CmdUtil::DrawIndexAutoSize;
// DRAW_INDEX_2 operations generate the following PM4 packets in the worst case:
//  + SET_SH_REG (2 registers)
//  + SET_SH_REG (1 register)
//  + NUM_INSTANCES
//  + INDEX_TYPE
//  + DRAW_INDEX_2
constexpr uint32 DrawIndex2CmdBufSize        = (CmdUtil::ShRegSizeDwords + 2)     +
                                               (CmdUtil::ShRegSizeDwords + 1)     +
                                               CmdUtil::NumInstancesDwords        +
                                               (CmdUtil::ConfigRegSizeDwords + 1) +
                                               CmdUtil::DrawIndex2Size;
// DRAW_INDEX_OFFSET_2 operations generate the following PM4 packets in the worst case:
//  + SET_SH_REG (2 registers)
//  + SET_SH_REG (1 register)
//  + NUM_INSTANCES
//  + DRAW_INDEX_OFFSET_2
constexpr uint32 DrawIndexOffset2CmdBufSize  = (CmdUtil::ShRegSizeDwords + 2) +
                                               (CmdUtil::ShRegSizeDwords + 1) +
                                               CmdUtil::NumInstancesDwords    +
                                               CmdUtil::DrawIndexOffset2Size;
// DISPATCH operations generate the following PM4 packets in the worst case:
//  + SET_SH_REG (2 registers)
//  + DISPATCH_DIRECT
constexpr uint32 DispatchCmdBufSize          = (CmdUtil::ShRegSizeDwords + 2) +
                                               CmdUtil::DispatchDirectSize;

// Enumerates all of the GFX9-specific indirect operations which can be generated by an indirect command generator.
enum class IndirectOpType : uint32
{
    Skip = 0,           // Skip this indirect operation and generate no packets for it. This is used for things like
                        // index buffer bindings, which are skipped and handled as part of the DrawIndex2 operation.
    Dispatch,           // Issue a direct dispatch call.
    DrawIndexAuto,      // Issue a non-indexed draw call.
    DrawIndexOffset2,   // Issue an indexed draw call. This variation is used in cases where the indirect command
                        // generator doesn't also contain an indirect index-buffer binding. In this case, we need
                        // to inherit the already-bound index buffer.
    DrawIndex2,         // Issue an indexed draw call. This variation is used in cases where the indirect command
                        // generator also contains its own index-buffer binding. This is more performant than the
                        // other variation since it avoids unnecessary memory reads by the CP.
    SetUserData,        // Sets one or more consecutive virtualized user-data entries. These entries may end up
                        // being mapped to either physical SPI user-data registers or to the spill table.
    VertexBufTableSrd,  // Builds an untyped buffer SRD in the vertex buffer table.
    DispatchMesh,       // Issue a dispatch mesh call.
};

// Contains all information the indirect command generation shader(s) need to generate a command buffer snippet for
// a single command parameter.
// NOTE: This *must* be compatible with the same-named structure inside core/hw/gfxip/rpm/gfx9/globals.hlsl !
struct IndirectParamData
{
    // Type of the command operation.
    IndirectOpType  type;
    // Offsets into the command buffer and argument buffer. Both are relative to the owning command's offsets.
    uint32  cmdBufOffset;
    uint32  argBufOffset;
    // Sizes (in bytes) of the command buffer space and argument buffer space used by this command parameter.
    uint32  cmdBufSize;
    uint32  argBufSize;
    // Miscellaneous data which varies by command parameter type. See below for details specific to each type
    // of indirect operation:
    //  DrawIndex2:
    //  [0] = Offset in the argument buffer where the index data bind information is stored
    //  SetUserData:
    //  [0] = First user-data entry to update
    //  [1] = Number of user-data entries to update
    //  IndirectTableSrd:
    //  [0] = Offset into the table where the SRD is written (in DWORDs)
    uint32  data[2];
};

// =====================================================================================================================
// GFX9 specific version of the IndirectCmdGenerator class. Responsible for knowing the layout of the command buffer
// snippets corresponding to different operations which can be done in an indirect command (e.g., draw, bind index data,
// etc.). Contains the indirect parameter data and populates the buffers used to communicate the pipeline signature and
// properties of the CmdExecuteIndirectCommands() call.
class IndirectCmdGenerator final : public Pm4::IndirectCmdGenerator
{
public:
    static size_t GetSize(
        const IndirectCmdGeneratorCreateInfo& createInfo);

    IndirectCmdGenerator(
        const Device&                         device,
        const IndirectCmdGeneratorCreateInfo& createInfo);

    virtual Result BindGpuMemory(
        IGpuMemory* pGpuMemory,
        gpusize     offset) override;

    virtual uint32 CmdBufStride(
        const Pipeline* pPipeline) const override;

    virtual void PopulateInvocationBuffer(
        GfxCmdBuffer*   pCmdBuffer,
        const Pipeline* pPipeline,
        bool            isTaskEnabled,
        gpusize         argsGpuAddr,
        uint32          maximumCount,
        uint32          indexBufSize,
        void*           pSrd) const override;

    virtual void PopulateParameterBuffer(
        GfxCmdBuffer*   pCmdBuffer,
        const Pipeline* pPipeline,
        void*           pSrd) const override;

    virtual void PopulatePropertyBuffer(
        GfxCmdBuffer*   pCmdBuffer,
        const Pipeline* pPipeline,
        void*           pSrd) const override;

    virtual void PopulateSignatureBuffer(
        GfxCmdBuffer*   pCmdBuffer,
        const Pipeline* pPipeline,
        void*           pSrd) const override;

    virtual void PopulateUserDataMappingBuffer(
        GfxCmdBuffer*   pCmdBuffer,
        const Pipeline* pPipeline,
        void*           pSrd) const override;

    bool ContainsIndexBufferBind() const { return m_bindsIndexBuffer; }

    IndirectParamData* const GetIndirectParamData() const { return m_pParamData; }

    bool UsingExecuteIndirectPacket() const { return m_usingExecuteIndirectPacket; }

protected:
    virtual ~IndirectCmdGenerator() { }

private:
    void InitParamBuffer(
        const IndirectCmdGeneratorCreateInfo& createInfo);

    uint32 DetermineMaxCmdBufSize(
        Pm4::GeneratorType   type,
        IndirectOpType       opType,
        const IndirectParam& param) const;

    // Tracks whether or not commands generated by this object include an index-buffer binding.
    bool  m_bindsIndexBuffer;

    // Can we use the ExecuteIndirect packet.
    bool m_usingExecuteIndirectPacket;

    // Array of IndirectParamData structures. These items are used to communicate how the RPM shader(s) for command
    // generation should interpret the application's indirect-argument buffer contents.
    IndirectParamData*const  m_pParamData;

    IndirectParam*const      m_pCreationParam;

    bool    m_cmdSizeNeedPipeline;  // Specifies whether command sizes and command buffer stride can be determined
                                    // at IndirectCmdGenerator creation time
                                    // If not, they will depend on pipeline object

    PAL_DISALLOW_DEFAULT_CTOR(IndirectCmdGenerator);
    PAL_DISALLOW_COPY_AND_ASSIGN(IndirectCmdGenerator);
};

// =====================================================================================================================
// Helper function for updating a command buffer's tracking of which user-data entries have known values after running
// an indirect-command generator and executing the generated commands.
template <typename Signature>
void CommandGeneratorTouchedUserData(
    UserDataFlags&              mask,
    const IndirectCmdGenerator& generator,
    const Signature&            signature)
{
    // Mark any user-data entries which the command generator touched as "untouched" so that redundant user-data
    // filtering won't incorrectly reject subsequent user-data updates.
    for (uint32 idx = 0; idx < NumUserDataFlagsParts; ++idx)
    {
        mask[idx] &= ~(generator.TouchedUserDataEntries()[idx]);
    }
}

} // Gfx9
} // Pal