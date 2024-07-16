/*
 ***********************************************************************************************************************
 *
 *  Copyright (c) 2020-2024 Advanced Micro Devices, Inc. All Rights Reserved.
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING!
//
// This code has been generated automatically. Do not hand-modify this code.
//
// When changes are needed, modify the tools generating this module in the tools\generate directory
//
// WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING!  WARNING! WARNING!  WARNING!  WARNING!  WARNING!
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/**
************************************************************************************************************************
* @file  g_shader_profile.h
* @brief auto-generated file.
*        Contains the definition for structs related to shader tuning and ShaderProfile class
************************************************************************************************************************
*/
#pragma once

#include <sstream>
#include <iomanip>

#include "include/app_profile.h"
#include "include/vk_shader_code.h"
#include "include/vk_utils.h"
#include "palDevice.h"

#include "utils/json_writer.h"
#include "palJsonWriter.h"

#if ICD_RUNTIME_APP_PROFILE
#include "utils/json_reader.h"
#endif


namespace vk
{
struct ShaderProfilePattern
{
    // Defines which pattern tests are enabled
    union
    {
        struct
        {
            // Stage needs to be active
            uint32_t stageActive : 1;
            // Stage needs to be inactive
            uint32_t stageInactive : 1;
            // Test code hash (128-bit)
            uint32_t codeHash : 1;
            // Test code size less than codeSizeLessThanValue
            uint32_t codeSizeLessThan : 1;
            uint32_t reserved : 27;
        };
        uint32_t u32All;
    }match;
    Pal::ShaderHash codeHash;
    size_t codeSizeLessThanValue;
};
// Defines which pattern tests are enabled
struct PipelineProfilePattern
{
    union
    {
        struct
        {
            // Pattern always hits
            uint32_t always : 1;
            // Pattern applies only to shader hash matched
            uint32_t shaderOnly : 1;
            uint32_t reserved : 30;
        };
        uint32_t u32All;
    }match;
    ShaderProfilePattern shaders[ShaderStage::ShaderStageCount];
};

struct ShaderTuningOptions
{
    uint32_t vgprLimit;
    uint32_t sgprLimit;
    uint32_t ldsSpillLimitDwords;
    uint32_t maxArraySizeForFastDynamicIndexing;
    uint32_t userDataSpillThreshold;
    uint32_t maxThreadGroupsPerComputeUnit;
    uint32_t waveSize;
    uint32_t wgpMode;
    uint32_t waveBreakSize;
    Vkgc::ThreadGroupSwizzleMode threadGroupSwizzleMode;
    bool threadIdSwizzleMode;
    uint32_t overrideShaderThreadGroupSizeX;
    uint32_t overrideShaderThreadGroupSizeY;
    uint32_t overrideShaderThreadGroupSizeZ;
#if ICD_BUILD_LLPC
    uint32_t disableFMA;
#endif
#if ICD_BUILD_LLPC
    bool useSiScheduler;
#endif
#if ICD_BUILD_LLPC
    bool disableCodeSinking;
#endif
#if ICD_BUILD_LLPC
    bool favorLatencyHiding;
#endif
#if ICD_BUILD_LLPC
    bool reconfigWorkgroupLayout;
#endif
#if ICD_BUILD_LLPC
    uint32_t forceLoopUnrollCount;
#endif
#if ICD_BUILD_LLPC
    bool enableLoadScalarizer;
#endif
#if ICD_BUILD_LLPC
    bool disableLicm;
#endif
#if ICD_BUILD_LLPC
    uint32_t unrollThreshold;
#endif
#if ICD_BUILD_LLPC
    Vkgc::DenormalMode fp32DenormalMode;
#endif
#if ICD_BUILD_LLPC
    uint32_t fastMathFlags;
#endif
#if ICD_BUILD_LLPC
    uint32_t disableFastMathFlags;
#endif
#if ICD_BUILD_LLPC
    uint32_t nsaThreshold;
#endif
#if ICD_BUILD_LLPC
    Vkgc::InvariantLoads aggressiveInvariantLoads;
#endif
#if ICD_BUILD_LLPC
    bool scalarizeWaterfallLoads;
#endif
#if ICD_BUILD_LLPC
    bool backwardPropagateNoContract;
#endif
#if ICD_BUILD_LLPC
    bool forwardPropagateNoContract;
#endif
};

struct ShaderProfileAction
{
    struct
    {
        // Defines which values are applied
        union
        {
            struct
            {
                uint32_t optStrategyFlags : 1;
                uint32_t optStrategyFlags2 : 1;
                uint32_t vgprLimit : 1;
                uint32_t sgprLimit : 1;
                uint32_t ldsSpillLimitDwords : 1;
                uint32_t maxArraySizeForFastDynamicIndexing : 1;
                uint32_t userDataSpillThreshold : 1;
                uint32_t maxThreadGroupsPerComputeUnit : 1;
                uint32_t scOptions : 1;
                uint32_t scOptionsMask : 1;
                uint32_t trapPresent : 1;
                uint32_t debugMode : 1;
                uint32_t allowReZ : 1;
                uint32_t shaderReplaceEnabled : 1;
                uint32_t fpControlFlags : 1;
                uint32_t optimizationIntent : 1;
                uint32_t disableLoopUnrolls : 1;
                uint32_t waveSize : 1;
                uint32_t wgpMode : 1;
                uint32_t waveBreakSize : 1;
                uint32_t nggDisable : 1;
                uint32_t nggFasterLaunchRate : 1;
                uint32_t nggVertexReuse : 1;
                uint32_t nggEnableFrustumCulling : 1;
                uint32_t nggEnableBoxFilterCulling : 1;
                uint32_t nggEnableSphereCulling : 1;
                uint32_t nggEnableBackfaceCulling : 1;
                uint32_t nggEnableSmallPrimFilter : 1;
                uint32_t threadGroupSwizzleMode : 1;
                uint32_t overrideShaderThreadGroupSize : 1;
#if ICD_BUILD_LLPC
                uint32_t disableFMA : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t useSiScheduler : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t disableCodeSinking : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t favorLatencyHiding : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t reconfigWorkgroupLayout : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t forceLoopUnrollCount : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t enableLoadScalarizer : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t disableLicm : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t unrollThreshold : 1;
#endif
                uint32_t fp32DenormalMode : 1;
#if ICD_BUILD_LLPC
                uint32_t fastMathFlags : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t disableFastMathFlags : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t nsaThreshold : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t aggressiveInvariantLoads : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t workaroundStorageImageFormats : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t scalarizeWaterfallLoads : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t backwardPropagateNoContract : 1;
#endif
#if ICD_BUILD_LLPC
                uint32_t forwardPropagateNoContract : 1;
#endif
            };
            uint32_t u32All;
        }apply;
        ShaderTuningOptions tuningOptions;
    }shaderCreate;

    struct
    {
        const void* pCode;
        size_t sizeInBytes;
    }shaderReplace;

    struct
    {

    }pipelineShader;
    // Applied to DynamicXShaderInfo
    struct
    {
        // Defines which values are applied
        union
        {
            struct
            {
                uint32_t maxWavesPerCu : 1;
                uint32_t maxThreadGroupsPerCu : 1;
                uint32_t reserved : 29;
            };
            uint32_t u32All;
        }apply;
        uint32_t maxWavesPerCu;
        uint32_t maxThreadGroupsPerCu;
    }dynamicShaderInfo;
};

struct PipelineProfileAction
{
    // Applied to ShaderCreateInfo/PipelineShaderInfo/DynamicXShaderInfo:
    ShaderProfileAction shaders[ShaderStage::ShaderStageCount];
    // Applied to Graphics/ComputePipelineCreateInfo:
    struct
    {
        union
        {
            struct
            {
                uint32_t binningOverride : 1;
                uint32_t lateAllocVsLimit : 1;
                uint32_t reserved : 30;
            };
            uint32_t u32All;
        }apply;
        Pal::BinningOverride binningOverride;
        uint32_t lateAllocVsLimit;
    }createInfo;
};
// This struct describes a single entry in a per-application profile of shader compilation parameter tweaks. Each
// entry describes a pair of match patterns and actions. For a given shader in a given pipeline, if all patterns
// defined by this entry match, then all actions are applied to that shader prior to compilation.
struct PipelineProfileEntry
{
    PipelineProfilePattern pattern;
    PipelineProfileAction action;
};
constexpr uint32_t InitialPipelineProfileEntries = 32;
// Describes a collection of entries that can be used to apply application-specific shader compilation tuning to
// different classes of shaders.
struct PipelineProfile
{
    uint32_t entryCount;
    uint32_t entryCapacity;
    PipelineProfileEntry* pEntries;
};

class ShaderProfile
{
public:
    void PipelineProfileToJson(PipelineProfile pipelineProfile, const char* pFilePath);

#if ICD_RUNTIME_APP_PROFILE
    bool ParseJsonProfile(
        utils::Json*                 pJson,
        PipelineProfile*             pProfile,
        const VkAllocationCallbacks* pAllocator);
#endif

#if ICD_BUILD_LLPC
    void BuildAppProfileLlpc(const AppProfile appProfile,
                             const Pal::GfxIpLevel gfxIpLevel,
                             const Pal::AsicRevision asicRevision,
                             PipelineProfile* pPipelineProfile);
#endif


private:
    // Methods specific to json writer
    std::string getShaderStageName(uint32_t i);

    template <typename T>
    std::string int_to_hex(T upper, T lower);

    template <typename T>
    std::string int_to_hex(T value);

    void ProfileEntryActionToJson(PipelineProfileEntry entry, Util::JsonWriter* pWriter);
    void ProfileEntryPatternToJson(PipelineProfilePattern pattern, Util::JsonWriter* pWriter);

#if ICD_RUNTIME_APP_PROFILE
    // Methods specific to json reader
    bool CheckValidKeys(
        utils::Json* pObject,
        size_t       numKeys,
        const char** pKeys);

    bool ParseJsonProfileEntry(
        utils::Json*          pPatterns,
        utils::Json*          pActions,
        utils::Json*          pEntry,
        PipelineProfileEntry* pProfileEntry);

    bool ParseJsonProfileEntryPattern(
        utils::Json*            pJson,
        PipelineProfilePattern* pPattern);

    bool ParseJsonProfileEntryAction(
        utils::Json*           pJson,
        PipelineProfileAction* pAction);

    bool ParseJsonProfilePatternShader(
        utils::Json*          pJson,
        ShaderStage           shaderStage,
        ShaderProfilePattern* pPattern);

    bool ParseJsonProfileActionShader(
        utils::Json*         pJson,
        ShaderStage          shaderStage,
        ShaderProfileAction* pActions);
#endif

#if ICD_BUILD_LLPC
    void SetAppProfileLlpcDoomEternalNavi21(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWolfensteinYoungbloodNavi21(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcAshesOfTheSingularityNavi21(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcSniperElite5Navi21(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcRedDeadRedemption2Navi21(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWorldWarZNavi21(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcRage2Navi21(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDoomEternalNavi23(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWolfensteinYoungbloodNavi23(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcMadMaxGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcQuake2RTXGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWarHammerIIGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWolfensteinIIGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcXPlaneGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWarHammerIIIGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDiRT4GfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcBaldursGate3GfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcStrangeBrigadeGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcRainbowSixSiegeGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDoomGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcRiseOfTheTombraGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcTalosGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcShadowOfTheTombRaiderGfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcF1_2017GfxIp10_3Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDoomEternalNavi24(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWolfensteinYoungbloodNavi24(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDoomEternalNavi22(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWolfensteinYoungbloodNavi22(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcBaldursGate3Navi22(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWarHammerIIGfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcGhostReconBreakpointGfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDoomEternalGfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWolfensteinIIGfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcBaldursGate3GfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcStrangeBrigadeGfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDoomGfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcRage2GfxIp10_1Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDetroitBecomeHumanGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWarHammerIIGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcSeriousSamFusionGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDota2Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWolfensteinIIGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcCSGOGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcValheimGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWarHammerIIIGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDiRT4Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcRiseOfTheTombraGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcTalosGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcDawnOfWarIIIGeneric(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcF1_2017Generic(PipelineProfile* pPipelineProfile);
    void SetAppProfileLlpcWorldWarZGeneric(PipelineProfile* pPipelineProfile);
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcEnshroudedNavi32(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcThreeKingdomsGfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcQuake2RTXGfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcWolfensteinYoungbloodGfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcWarHammerIIIGfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcBaldursGate3GfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcStrangeBrigadeGfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcRedDeadRedemption2GfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcTalosGfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
    void SetAppProfileLlpcRage2GfxIp11_0Generic(PipelineProfile* pPipelineProfile);
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI31
    void SetAppProfileLlpcEnshroudedNavi31(PipelineProfile* pPipelineProfile);
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI31
    void SetAppProfileLlpcWolfensteinYoungbloodNavi31(PipelineProfile* pPipelineProfile);
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI31
    void SetAppProfileLlpcSniperElite5Navi31(PipelineProfile* pPipelineProfile);
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI33
    void SetAppProfileLlpcWolfensteinYoungbloodNavi33(PipelineProfile* pPipelineProfile);
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI33
    void SetAppProfileLlpcSniperElite5Navi33(PipelineProfile* pPipelineProfile);
#endif
#endif
#endif

};

}
