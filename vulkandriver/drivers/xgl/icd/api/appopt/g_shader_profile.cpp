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


#include "g_shader_profile.h"
#include "settings/g_settings.h"



namespace Bil
{
}

using namespace Bil;
using namespace Util;

namespace vk
{
#if ICD_BUILD_LLPC
void ShaderProfile::BuildAppProfileLlpc(const AppProfile appProfile,
                                        const Pal::GfxIpLevel gfxIpLevel,
                                        const Pal::AsicRevision asicRevision,
                                        PipelineProfile* pPipelineProfile)
{
    if (appProfile == AppProfile::DoomEternal)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi21)
            {
                SetAppProfileLlpcDoomEternalNavi21(pPipelineProfile);
            }
            if (asicRevision == Pal::AsicRevision::Navi23)
            {
                SetAppProfileLlpcDoomEternalNavi23(pPipelineProfile);
            }
            if (asicRevision == Pal::AsicRevision::Navi24)
            {
                SetAppProfileLlpcDoomEternalNavi24(pPipelineProfile);
            }
            if (asicRevision == Pal::AsicRevision::Navi22)
            {
                SetAppProfileLlpcDoomEternalNavi22(pPipelineProfile);
            }
        }
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcDoomEternalGfxIp10_1Generic(pPipelineProfile);
        }
    }
    if (appProfile == AppProfile::WolfensteinYoungblood)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi21)
            {
                SetAppProfileLlpcWolfensteinYoungbloodNavi21(pPipelineProfile);
            }
            if (asicRevision == Pal::AsicRevision::Navi23)
            {
                SetAppProfileLlpcWolfensteinYoungbloodNavi23(pPipelineProfile);
            }
            if (asicRevision == Pal::AsicRevision::Navi24)
            {
                SetAppProfileLlpcWolfensteinYoungbloodNavi24(pPipelineProfile);
            }
            if (asicRevision == Pal::AsicRevision::Navi22)
            {
                SetAppProfileLlpcWolfensteinYoungbloodNavi22(pPipelineProfile);
            }
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
#if VKI_BUILD_NAVI31
            if (asicRevision == Pal::AsicRevision::Navi31)
            {
                SetAppProfileLlpcWolfensteinYoungbloodNavi31(pPipelineProfile);
            }
#endif
#if VKI_BUILD_NAVI33
            if (asicRevision == Pal::AsicRevision::Navi33)
            {
                SetAppProfileLlpcWolfensteinYoungbloodNavi33(pPipelineProfile);
            }
#endif
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcWolfensteinYoungbloodGfxIp11_0Generic(pPipelineProfile);
        }
#endif
    }
    if (appProfile == AppProfile::AshesOfTheSingularity)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi21)
            {
                SetAppProfileLlpcAshesOfTheSingularityNavi21(pPipelineProfile);
            }
        }
    }
    if (appProfile == AppProfile::SniperElite5)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi21)
            {
                SetAppProfileLlpcSniperElite5Navi21(pPipelineProfile);
            }
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
#if VKI_BUILD_NAVI31
            if (asicRevision == Pal::AsicRevision::Navi31)
            {
                SetAppProfileLlpcSniperElite5Navi31(pPipelineProfile);
            }
#endif
#if VKI_BUILD_NAVI33
            if (asicRevision == Pal::AsicRevision::Navi33)
            {
                SetAppProfileLlpcSniperElite5Navi33(pPipelineProfile);
            }
#endif
        }
#endif
    }
    if (appProfile == AppProfile::RedDeadRedemption2)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi21)
            {
                SetAppProfileLlpcRedDeadRedemption2Navi21(pPipelineProfile);
            }
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcRedDeadRedemption2GfxIp11_0Generic(pPipelineProfile);
        }
#endif
    }
    if (appProfile == AppProfile::WorldWarZ)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi21)
            {
                SetAppProfileLlpcWorldWarZNavi21(pPipelineProfile);
            }
        }

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcWorldWarZGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::Rage2)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi21)
            {
                SetAppProfileLlpcRage2Navi21(pPipelineProfile);
            }
        }
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcRage2GfxIp10_1Generic(pPipelineProfile);
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcRage2GfxIp11_0Generic(pPipelineProfile);
        }
#endif
    }
    if (appProfile == AppProfile::MadMax)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcMadMaxGfxIp10_3Generic(pPipelineProfile);
        }
    }
    if (appProfile == AppProfile::Quake2RTX)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcQuake2RTXGfxIp10_3Generic(pPipelineProfile);
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcQuake2RTXGfxIp11_0Generic(pPipelineProfile);
        }
#endif
    }
    if (appProfile == AppProfile::WarHammerII)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcWarHammerIIGfxIp10_3Generic(pPipelineProfile);
        }
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcWarHammerIIGfxIp10_1Generic(pPipelineProfile);
        }

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcWarHammerIIGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::WolfensteinII)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcWolfensteinIIGfxIp10_3Generic(pPipelineProfile);
        }
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcWolfensteinIIGfxIp10_1Generic(pPipelineProfile);
        }

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcWolfensteinIIGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::XPlane)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcXPlaneGfxIp10_3Generic(pPipelineProfile);
        }
    }
    if (appProfile == AppProfile::WarHammerIII)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcWarHammerIIIGfxIp10_3Generic(pPipelineProfile);
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcWarHammerIIIGfxIp11_0Generic(pPipelineProfile);
        }
#endif

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcWarHammerIIIGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::DiRT4)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcDiRT4GfxIp10_3Generic(pPipelineProfile);
        }

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcDiRT4Generic(pPipelineProfile);
    }
    if (appProfile == AppProfile::BaldursGate3)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            if (asicRevision == Pal::AsicRevision::Navi22)
            {
                SetAppProfileLlpcBaldursGate3Navi22(pPipelineProfile);
            }
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcBaldursGate3GfxIp10_3Generic(pPipelineProfile);
        }
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcBaldursGate3GfxIp10_1Generic(pPipelineProfile);
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcBaldursGate3GfxIp11_0Generic(pPipelineProfile);
        }
#endif
    }
    if (appProfile == AppProfile::StrangeBrigade)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcStrangeBrigadeGfxIp10_3Generic(pPipelineProfile);
        }
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcStrangeBrigadeGfxIp10_1Generic(pPipelineProfile);
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcStrangeBrigadeGfxIp11_0Generic(pPipelineProfile);
        }
#endif
    }
    if (appProfile == AppProfile::RainbowSixSiege)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcRainbowSixSiegeGfxIp10_3Generic(pPipelineProfile);
        }
    }
    if (appProfile == AppProfile::Doom)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcDoomGfxIp10_3Generic(pPipelineProfile);
        }
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcDoomGfxIp10_1Generic(pPipelineProfile);
        }
    }
    if (appProfile == AppProfile::RiseOfTheTombra)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcRiseOfTheTombraGfxIp10_3Generic(pPipelineProfile);
        }

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcRiseOfTheTombraGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::Talos)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcTalosGfxIp10_3Generic(pPipelineProfile);
        }
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcTalosGfxIp11_0Generic(pPipelineProfile);
        }
#endif

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcTalosGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::ShadowOfTheTombRaider)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcShadowOfTheTombRaiderGfxIp10_3Generic(pPipelineProfile);
        }
    }
    if (appProfile == AppProfile::F1_2017)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_3)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcF1_2017GfxIp10_3Generic(pPipelineProfile);
        }

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcF1_2017Generic(pPipelineProfile);
    }
    if (appProfile == AppProfile::GhostReconBreakpoint)
    {
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp10_1)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcGhostReconBreakpointGfxIp10_1Generic(pPipelineProfile);
        }
    }
    if (appProfile == AppProfile::DetroitBecomeHuman)
    {

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcDetroitBecomeHumanGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::SeriousSamFusion)
    {

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcSeriousSamFusionGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::Dota2)
    {

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcDota2Generic(pPipelineProfile);
    }
    if (appProfile == AppProfile::CSGO)
    {

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcCSGOGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::Valheim)
    {

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcValheimGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::DawnOfWarIII)
    {

        // The shader profile in this function will apply to all GfxIps and AsicRevisions in general
        SetAppProfileLlpcDawnOfWarIIIGeneric(pPipelineProfile);
    }
    if (appProfile == AppProfile::Enshrouded)
    {
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            if (asicRevision == Pal::AsicRevision::Navi32)
            {
                SetAppProfileLlpcEnshroudedNavi32(pPipelineProfile);
            }
#if VKI_BUILD_NAVI31
            if (asicRevision == Pal::AsicRevision::Navi31)
            {
                SetAppProfileLlpcEnshroudedNavi31(pPipelineProfile);
            }
#endif
        }
#endif
    }
    if (appProfile == AppProfile::ThreeKingdoms)
    {
#if VKI_BUILD_GFX11
        if (gfxIpLevel == Pal::GfxIpLevel::GfxIp11_0)
        {
            // The shader profile in this function will apply to all AsicRevisions in this GfxIp level
            SetAppProfileLlpcThreeKingdomsGfxIp11_0Generic(pPipelineProfile);
        }
#endif
    }
}
#endif

#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDoomEternalNavi21(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xBC6D27A08A2FBA77;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x08EFA5EE2B3A2DCB;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x521460AE1A738CAD;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x17D000865C71AF81;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xA1DCB75982BCC0ED;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x06DD404EF721DF42;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.vgprLimit = 56u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x407D20BCEB8E96B0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x5F20CB2D275CC846;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableLicm = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.disableLicm = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinYoungbloodNavi21(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xFB9AADD786B3883A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x15ED07FC5A652D5B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.disableCodeSinking = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xAFAB1A2EFCF63AE2;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xA0FB7EBC03B45207;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x2F36EDC1C043ADF9;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x421CC6F5EC031EC1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x04A8D94913ED81BB;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x45B1FD4FE26B69C3;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x26F3DAD1DF817A8A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x182812E30A77E9BC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xCD825E729A4B3230;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xA5E97AA30FC20BEE;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x0C0E71A4AA2EB148;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x623C2A0008628E23;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 14u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.unrollThreshold = 1600u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x1647AF746BADB1E4;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x6B7A33F6880D2379;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.vgprLimit = 72u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.ldsSpillLimitDwords = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.ldsSpillLimitDwords = 4096u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xDA893D5D28F70704;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xDA18B129E7454401;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 8u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcAshesOfTheSingularityNavi21(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xD72531A6567C27A3;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x1E36FACABCDFB16A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 1u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 12u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xF6A2525D1FD463CF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x43E0B63C9681B7C6;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 1u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 10u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x499C5CC661FC0A33;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xFF86117D0EF60AD3;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 1u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x6B1FEFD4AD429584;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x85DE1535C73027D6;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x25ACDA69ECABBF00;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE95B79DFD0DC2A30;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xAE42B968F4CD88A7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD9B5F66791932768;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcSniperElite5Navi21(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x6069BF60F0163584;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0B13B14DE18B1AB3;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x7BF8663982C14410;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xFFF55CEC5AA74826;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x58B0EBA79AC76A24;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x6E53280BE92E28BB;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x377861BA46424870;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xCC696E5B639DE9FE;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x06CD894B5303A323;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x1B597685A9833572;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].dynamicShaderInfo.maxWavesPerCu = 14u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x3AE7F1BD6607F2EF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x2B74437B8F90F2B9;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 4u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x22FF55A361334911;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x8EB6FDF9F7FAA3FA;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 6u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x277A952F5926E3F5;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE353A0C80D076BB8;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x346F5FEB86E64A93;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0B016D7933BC408C;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRedDeadRedemption2Navi21(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x2C2FB8C0CA4995E4;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xE63764D8AB075D10;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x550D6F775D85B05C;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xFD3D6FD85419A887;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 2u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x75F708C573ABE471;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3D177A356FAC334D;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xD59706AEA9453F02;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xDF68DFD3AA548E8F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x4B5872346173E04A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0AC33E936D12791E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWorldWarZNavi21(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xE247BF80584B7773;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x321366744F4A06A2;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 8u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x4FF6D09B68384B2F;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x32C1D5DA7F42B46C;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].dynamicShaderInfo.maxWavesPerCu = 14u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xDC867A261B5F9B02;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x830E59F01649BEAC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRage2Navi21(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x15D3F1264DDA4995;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x5D57D7DE1344947E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x30ACC351F2E2C8AE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0D3BB534D7F86407;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3788EBA5A15D6542;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0596C40B7D193021;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xA4F37C25EAC9EE41;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xA96E3B3D24510BD0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDoomEternalNavi23(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinYoungbloodNavi23(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcMadMaxGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xDF10F846E20FDCED;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x2BD30AD00A5AF320;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xA8EC09BF2E5F3A7F;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xA483CBF9BBD456DA;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcQuake2RTXGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x22C6B575129AB32D;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xE128CF59638C2E1C;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.favorLatencyHiding = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x123B4766DB4CD890;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x45911829EC7E9028;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.favorLatencyHiding = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x310D150C5FE4134B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x59B0428F3CD67115;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x7701746DCF8CCE1E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x9AD5144CC78368A0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 4u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x88F70575C05DDE23;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x22CDBCC4784FCAAB;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 4u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWarHammerIIGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinIIGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x9393B9383F5E494B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xAF0F2D97BEF3AF3D;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 1u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.favorLatencyHiding = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xEB2F68F486B52893;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xEB9A42DC7FF51768;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xD3D8A4F61D7CBF0C;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x4AB27AA97EFB9988;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x0DC495CA6C48428D;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x0226B384A0A386391;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x5C6FC3A4FB143A2E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x4FF9952EB812B9D1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xB385E225148ADB49;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x594FEDE1C0CC46DB;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x6D8014BC34136EDC;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x50643F72906FDCFF;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcXPlaneGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x02F00AD481BE2EEA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x797D8E2E1B0C795E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xC92D1DCC8217F30A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x53D1C89C5BCB5728;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWarHammerIIIGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x198C0842F95C0BCC;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3750559B33D6C366;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.disableCodeSinking = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDiRT4GfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x2989E44BA02788A8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xE4EB5EA3FB70EEB7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcBaldursGate3GfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{

}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcStrangeBrigadeGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{

}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRainbowSixSiegeGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x07FC541B1939BB21;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x20E308BFED28116B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x16E0F84A01D0587F;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x073BCE2F2EAD486B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xF3C3EAC2425C09FF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x4A12638C54615C6C;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x95735F6FB95C7771;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x989C42782537210A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x93FC014EC2355ADC;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x18B1C67C215E6135;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x85C3B0A7F65CB8EC;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x70A7414DBF8A2903;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x3E49498F389B5B36;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0xEFE79E1D1A647920;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x0AB63222604C2453;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD404AE6135AAA74E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDoomGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRiseOfTheTombraGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x290D42AD8F52F8A6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD401B57B99F03E25;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xFFAF92B47E9EF9FA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x4885C362E168F99B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x93909280C3645D3B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x6AF73682CD6C345E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcTalosGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x265F213698C57054;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x872392726F4754B0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcShadowOfTheTombRaiderGfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcF1_2017GfxIp10_3Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x70059B6ED83EAAD0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x36B0201AFB41ACD2;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDoomEternalNavi24(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinYoungbloodNavi24(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDoomEternalNavi22(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinYoungbloodNavi22(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x1647AF746BADB1E4;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x6B7A33F6880D2379;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.vgprLimit = 72u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.ldsSpillLimitDwords = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.ldsSpillLimitDwords = 4096u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x0C0E71A4AA2EB148;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x623C2A0008628E23;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 14u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.unrollThreshold = 1600u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xFB9AADD786B3883A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x15ED07FC5A652D5B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.disableCodeSinking = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcBaldursGate3Navi22(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x873D83C3007C363B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xE3ACD3EF1D4E4C61;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.

    threadGroupSwizzleMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.

    threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_16x16;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x651EFCD92453935F;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xDDD2752710683F35;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x8B0A9076160D26FE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xB5EAF95BD9DDD3CD;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x86AD43D9FDA40D74;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x769367A6773E5CE3;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 2u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x3DC07ACE96139F52;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xDABD900B408807EC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableLicm = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.disableLicm = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x0B140405E242B7E8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xD02572F9943475D7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWarHammerIIGfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x76D57AACBD824DBD;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x730EEEB82E6434A8;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableLoopUnrolls = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xA6DA0F40D4C8B54F;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE449709F7ED22376;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableLoopUnrolls = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcGhostReconBreakpointGfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x5C9CA20AD6346D03;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x2EA7831A09905A97;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.vgprLimit = 64u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xEBDC4467FDCDD5C0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xEB6D11546E813B52;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x812238AE4B2776F0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xAC7DC3DF17393922;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3593F285104C0BA8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x51E4223F302EFC57;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3B263A3C47C03E5E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xB39F2EEC1FAB4C8A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xCE5F47F906E68769;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x5CD1E5D4CBD4E138;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDoomEternalGfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x183D0A947AEC968C;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xCD8BED3A5B53770B;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x7D8747CB719980CF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x7EC0C9D811608DF2;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x31470D7DB287FF1B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xC4005611A6ED0D95;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.vgprLimit = 84u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xFD14066A61356A01;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xDF783DB69677EDB5;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x1D81E32E7AF51A49;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x647FBEC34ECF51EE;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 1u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x08C7289F7DCC7FC0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xA7267B61CD3896F3;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xC23553D21AC060DF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0270207CA5A4CE62;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x2EAAE3C34EB86E94;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xEA8FAB72C3E88612;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xBF702E91D366FD9B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x2A7989F7C61E7042;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x4ABD67A2567E4D84;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x843A0D494E5680EB;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.vgprLimit = 56u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.ldsSpillLimitDwords = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.ldsSpillLimitDwords = 1536u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xAFAB576853DCEC75;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xF872897EC301765D;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinIIGfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcBaldursGate3GfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{

}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcStrangeBrigadeGfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xDA756541F86D98D8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x3895042BCF33699A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 1u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x33F8FDE12C4ED7E3;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xFFF9A6ECC6E82E1E;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Enable;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x5B38C51BFF1696A0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x92FAC7999FFFADA5;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xA0FB69A7BE4893D0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x2321AE7374B9802B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x70C98118938D07F1;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x5B3491787D1D3C70;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Disable;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDoomGfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x3098CF611F82EE06;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xF986532BB17816EA;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x378987DA9EC691AA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x9CA3346855A52A28;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xB61429D9C34C9AC6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x8870793DE8BE7BA9;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x79783E2E62E4A0A1;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xD744A95893DA0783;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x7100A2DCD89FF535;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x1FA1621910138F98;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x56B9A44C18C9A595;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x6595736CFBCE3E56;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRage2GfxIp10_1Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x30ACC351F2E2C8AE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0D3BB534D7F86407;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xB74B7D8CC150E984;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD23F3CB2B6EA1926;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x97FF5DFF3CEB8D4D;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xF5AB252B63E9618A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 64u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDetroitBecomeHumanGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xD3CA0B94C0F09B4E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x151B4F8C25C76937;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.forceLoopUnrollCount = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.forceLoopUnrollCount = 2u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWarHammerIIGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 2150u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xB2E6F758475F2C36;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0xCDE8CB95FF89CD64;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.aggressiveInvariantLoads = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::DisableOptimization;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x12017C5C15ABF55D;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x4B070F72D05E4F5C;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.aggressiveInvariantLoads = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::DisableOptimization;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcSeriousSamFusionGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xE5CA053E0978210F;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xC79A37CD260277EF;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 900u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xD73AAFA65ED26E2C;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x8AF14CFF0496E80B;
    pPipelineProfile->pEntries[i].action.createInfo.apply.binningOverride = true;
    pPipelineProfile->pEntries[i].action.createInfo.binningOverride = Pal::BinningOverride::Enable;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xFBF50B9F866B1DAA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x70379E5982D0D369;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableLoopUnrolls = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x870DB091946A7585;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x620A4E559EB52DED;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableLoopUnrolls = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xC7A889DBAC76F591;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xB60900B3E1256DDF;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableLoopUnrolls = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x4E7F7BFEB93755B6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x435A117D4C9A824B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 900u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x879B2B5C5F578EB0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD22A4FE1A6B61288;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x56901799F5CBB608;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x9E4C92D858A55778;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3688A97277E808F7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE394E60E5EC992FD;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x8E0B62AA62452B75;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xC49272618F2AC58C;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableLoopUnrolls = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x7765A6FAEB079FF9;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x7FE1BAB7A796A797;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 900u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x26365F3E39BE59E6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xB020780B537A01C4;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x26CAD2EF6C447782;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE0A7E913F914052F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xECF087B422ED60CE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x154112D144C95DE5;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDota2Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x12AF666EF39A3CB9;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xFCF614FAF683306F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableLoopUnrolls = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinIIGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.unrollThreshold = 2150u;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcCSGOGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x84AEDCE5D263265A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x840F5E31E0457DC8;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.favorLatencyHiding = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcValheimGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xBB2BF534C38301FE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x80B79A74EA090A2F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.aggressiveInvariantLoads = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::DisableOptimization;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWarHammerIIIGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x198C0842F95C0BCC;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3750559B33D6C366;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.disableCodeSinking = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xE48682E90FF9E744;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x22444F165CD9CBAC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.aggressiveInvariantLoads = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::DisableOptimization;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x9173F0EF17DE7E00;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0xB722827255660D51;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.aggressiveInvariantLoads = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::DisableOptimization;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDiRT4Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x2989E44BA02788A8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xE4EB5EA3FB70EEB7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableLoopUnrolls = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x58DDFE449FC0B3D8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x86BB99062EADF839;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x52BFE4AF6F91CA9E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x5A0E57337FE9533E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x9F8DE289B463BEA5;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xDCDD10E03921B065;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xAD0576DABD7C7E8A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x98245ECF0F55D763;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x017842590A932DC9;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x70291F07F48E9C91;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x58BFFF013C011EC8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xA645928927B04693;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRiseOfTheTombraGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xC4D98DF71AFD07B9;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x505651AC055F537A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x9BF782559B7E4C74;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD226BA9E2A5BD8D6;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x9396E9EF9FF3F616;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x67F3B02E8A770712;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x32661ABEE21C5880;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xA1BAD82B65AB5760;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x849A89C60B8D27F6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x349F0CB03A54D3FB;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xB1372DAD4EC698E7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xB0F626077CDBD932;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xDC3E0E358DBE7EC8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD33A2617087D2E05;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x2AE8021F616DA377;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x88E3517DBB964D7F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x406B42FB06DA1DB4;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xC7A986985A693F84;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x5213D389B1F5F611;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xAB7E77553A4790F7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x07C84A20ECE7A38D;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x579F291BA16E8526;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x476E6779BD4275FD;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xF8D297EBB07612CD;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xC5503C7ADCB99118;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x6CFA095297E1EBD9;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x1A19414C76783DF3;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x8A53595F143C1D12;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x5C992B149FDE1ACA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x1784CCA187CA2131;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xF514EACF88A02A7D;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x2F8BD73037839855;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xBE3C260D6EC230AF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x77C34B1C08B3C185;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x601E54D3F386CDB8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x86C9BAF4D3389204;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xEFC9AABA5E5EA0E9;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0xB396D24454277733;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xC5D36B08C4B35CB7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x59790C4419A57854;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x1436591682E49AA4;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0xCA6C4EC171D01EC1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x3FD5A53E2881BCAA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x6AA53B86573DCB39;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcTalosGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x4E7F7BFEB93755B6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x435A117D4C9A824B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 900u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x265F213698C57054;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x872392726F4754B0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 1200u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x6E14B43995F96871;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x8294A7FB3EA3A6FC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x66C6B7E7268C1F39;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x2FD1481768E50101;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3688A97277E808F7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE394E60E5EC992FD;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 900u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xE5CA053E0978210F;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xC79A37CD260277EF;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x8296579A6570BC13;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x44FA946844F62696;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x28A2B57C92339574;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE4B55319684F59F2;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x879B2B5C5F578EB0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD22A4FE1A6B61288;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x7E1F46BE56E427AA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xA3EB7292C77A0365;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x0AECE7808011C4B8;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xF341093EF870C70A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xC7A889DBAC76F591;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xB60900B3E1256DDF;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x17CE9268FE52D03B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x41DF226419CD26C2;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x8AED19D93B57535B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x1D9EB7DDBA66FDF7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x6A43398F36D72603;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x20E5DA2E5917E241;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x50FBF528DC8AFBA5;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xF3AF74681BD79803;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x955B7EEAB9F6CDAA;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x51D59E18E8BD64D9;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xECF087B422ED60CE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x154112D144C95DE5;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x6DE524A0717A4D67;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE39F6C59BF345B46;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x26365F3E39BE59E6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xB020780B537A01C4;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xF5E3F18201C348E6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xFBAD8E5EE07D12D0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x7D5DFF0970FB823A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xCD911627E2D20F9B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x50DD68ED10CBE1AF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x2DAC71E14EB7945D;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x2D99D8DAAF0FE1BE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3C1101DC3E3B206E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xDE5274426C9F365C;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x474C4C2966E08232;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3BA507665B126C33;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xD85FA2403788076B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xD1C630198DDC7F21;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x6A07F5C0DAAB96E6;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcDawnOfWarIIIGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x45C950CF0DA3B6A1;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x4D6AE91E42846DDA;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xB2DCAC35E290D358;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xBC9A17755B98BA8F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xD287C35F916A0082;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x009DF75BD4DEBCA4;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xE7E4820E902750AD;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x8A6DB015D18CFA5A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x2579C71E29F36AD5;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x7C7BE79C0C10118B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xE3A7759FCC6120F6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x081F1C2167F254DB;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x802B5059F23C17E7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x85D431DFF448DCDD;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0xA548718852253D37;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x91950C2AEB1BC2A9;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xF5BCDB9801E6037B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x6B53D1FB5D5AD9EE;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x62729DC182370222;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0xE58161C4EDB2021F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x5DBE1F87F1B3EBEF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0xE8D91B9B08530510;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcF1_2017Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x59025B19EDAE3734;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x7C92A52E30841496;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xEC878C820BD1D81E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x767991F055DE051D;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x0EBEFF2CBF131944;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x8648E5203943C0B0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.enableLoadScalarizer = true;
}
#endif
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWorldWarZGeneric(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.unrollThreshold = 5000u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.tuningOptions.unrollThreshold = 5000u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x72471FC83E552DB6;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x8E7C1A0BF3840A8E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 5000u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x430DB057557A582A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xEBDC99D2D10996AF;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 5000u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x4EBED8BC1D0B0A4A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xE237E10D52D588EA;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.unrollThreshold = 5000u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.stageActive = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.lower = 0x4EAED799F784F0A1;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageVertex].codeHash.upper = 0x3B9C1F6C8B2237C8;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageVertex].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcEnshroudedNavi32(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x110E3E5875AD5038;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x4EB6C36D1B5FAB73;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.disableCodeSinking = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x107F065DCAD03A0B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3C706D601CF4803E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xCE615BACC3823464;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xCF8EB50DF001F7CC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.

    threadGroupSwizzleMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.

    threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_16x16;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcThreeKingdomsGfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.nsaThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.nsaThreshold = 2u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.apply.nsaThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.tuningOptions.nsaThreshold = 2u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageGeometry].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageGeometry].codeHash.lower = 0x5DD80203F449F5B2;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageGeometry].codeHash.upper = 0xF2949C1EF37A9E30;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.apply.nsaThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.tuningOptions.nsaThreshold = 2u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.apply.aggressiveInvariantLoads = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::EnableOptimization;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageGeometry].shaderCreate.tuningOptions.vgprLimit = 128u;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcQuake2RTXGfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x22C6B575129AB32D;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xE128CF59638C2E1C;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.favorLatencyHiding = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x123B4766DB4CD890;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x45911829EC7E9028;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.favorLatencyHiding = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x310D150C5FE4134B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x59B0428F3CD67115;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x7701746DCF8CCE1E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x9AD5144CC78368A0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 4u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.enableLoadScalarizer = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.enableLoadScalarizer = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x88F70575C05DDE23;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x22CDBCC4784FCAAB;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 4u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x27E5F9FF2F6E2393;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xDC8037D8038B53E3;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.vgprLimit = 96u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableLoopUnrolls = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.forceLoopUnrollCount = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.forceLoopUnrollCount = 1u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.scalarizeWaterfallLoads = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.scalarizeWaterfallLoads = true;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinYoungbloodGfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x1647AF746BADB1E4;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x6B7A33F6880D2379;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x50813E92360E956E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xABCCEBBA528ECBF7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.vgprLimit = 48u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xDA893D5D28F70704;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xDA18B129E7454401;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 8u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x0C0E71A4AA2EB148;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x623C2A0008628E23;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.apply.maxWavesPerCu = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].dynamicShaderInfo.maxWavesPerCu = 14u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.unrollThreshold = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.unrollThreshold = 1600u;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWarHammerIIIGfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x198C0842F95C0BCC;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3750559B33D6C366;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.disableCodeSinking = true;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcBaldursGate3GfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xF0E7A98F8A3378C0;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x04D2D5E97A62C63A;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.forceLoopUnrollCount = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.forceLoopUnrollCount = 1u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xEE40AB0DCEF5F327;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x0C60459C2F1883C6;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xA5A03AEEBECD3083;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xC412FE0973F91C52;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.favorLatencyHiding = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xB50DE2C597B18F35;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x2841218C6A53482E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.favorLatencyHiding = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.favorLatencyHiding = true;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcStrangeBrigadeGfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{

}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRedDeadRedemption2GfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x2C2FB8C0CA4995E4;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xE63764D8AB075D10;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x550D6F775D85B05C;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xFD3D6FD85419A887;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 2u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x75F708C573ABE471;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3D177A356FAC334D;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xD59706AEA9453F02;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0xDF68DFD3AA548E8F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x4B5872346173E04A;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0AC33E936D12791E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x6B8C4C0BFF97CD9B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xAE188551D7B56E7F;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xB45C86D78C780DDF;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xCB6B71CF1D45EDE1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcTalosGfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3B5FFEB59CF52B9E;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0BBCE6FD9AD36FFC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.always = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.

    threadGroupSwizzleMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.

    threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_4x4;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcRage2GfxIp11_0Generic(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x15D3F1264DDA4995;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x5D57D7DE1344947E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x30ACC351F2E2C8AE;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0D3BB534D7F86407;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x3788EBA5A15D6542;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x0596C40B7D193021;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.useSiScheduler = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xA4F37C25EAC9EE41;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xA96E3B3D24510BD0;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI31
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcEnshroudedNavi31(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xCE615BACC3823464;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xCF8EB50DF001F7CC;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.

    threadGroupSwizzleMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.

    threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_16x16;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0x110E3E5875AD5038;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x4EB6C36D1B5FAB73;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.disableCodeSinking = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.disableCodeSinking = true;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0x107F065DCAD03A0B;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x3C706D601CF4803E;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xEBF339F1B47FE1D1;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0xAA8891D44EF6D284;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.wgpMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.wgpMode = 2u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.

    threadGroupSwizzleMode = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.

    threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_16x16;
}
#endif
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI31
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinYoungbloodNavi31(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xF143D8ECD6DE6B11;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x8D8B60DE0782642B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.vgprLimit = 48u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI31
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcSniperElite5Navi31(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xDA09BB36370881E7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x1C444EAC602C4BB7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
}
#endif
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI33
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcWolfensteinYoungbloodNavi33(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.match.shaderOnly = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.lower = 0xF143D8ECD6DE6B11;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageCompute].codeHash.upper = 0x8D8B60DE0782642B;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.vgprLimit = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.vgprLimit = 40u;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.apply.useSiScheduler = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageCompute].shaderCreate.tuningOptions.useSiScheduler = true;
}
#endif
#endif
#endif
#if VKI_BUILD_GFX11
#if VKI_BUILD_NAVI33
#if ICD_BUILD_LLPC
void ShaderProfile::SetAppProfileLlpcSniperElite5Navi33(PipelineProfile* pPipelineProfile)
{
    uint32_t i;

    i = (pPipelineProfile->entryCount)++;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].match.codeHash = true;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.lower = 0xDA09BB36370881E7;
    pPipelineProfile->pEntries[i].pattern.shaders[ShaderStage::ShaderStageFragment].codeHash.upper = 0x1C444EAC602C4BB7;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.allowReZ = 1;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.apply.waveSize = true;
    pPipelineProfile->pEntries[i].action.shaders[ShaderStage::ShaderStageFragment].shaderCreate.tuningOptions.waveSize = 32u;
}
#endif
#endif
#endif

// =====================================================================================================================
// Generic code for generating Json output stream and writing to Json dump file using Pal::JsonWriter
std::string ShaderProfile::getShaderStageName(uint32_t i)
{
    //returns shader stage name
    switch (i)
    {
    case ShaderStage::ShaderStageTask:
        return "ts";
    case ShaderStage::ShaderStageVertex:
        return "vs";
    case ShaderStage::ShaderStageTessControl:
        return "hs";
    case ShaderStage::ShaderStageTessEval:
        return "ds";
    case ShaderStage::ShaderStageGeometry:
        return "gs";
    case ShaderStage::ShaderStageMesh:
        return "ms";
    case ShaderStage::ShaderStageFragment:
        return "ps";
    case ShaderStage::ShaderStageCompute:
        return "cs";
    default:
        return "unknown";
    }
}

template< typename T >
std::string ShaderProfile::int_to_hex(T upper, T lower)
{
    std::ostringstream stream;
    stream << "0x" << std::setfill('0') << std::setw(sizeof(T) * 2)
        << std::hex << upper << " " << lower;
    return stream.str();
}

template< typename T >
std::string ShaderProfile::int_to_hex(T value)
{
    std::ostringstream stream;
    stream << "0x" << std::setfill('0') << std::setw(sizeof(T) * 2)
        << std::hex << value;
    return stream.str();
}

void ShaderProfile::PipelineProfileToJson(PipelineProfile pipelineProfile, const char* pFilePath)
{
    utils::JsonOutputStream jsonStream(pFilePath);
    Util::JsonWriter writer(&jsonStream);
    uint32_t num_entries = pipelineProfile.entryCount;

    writer.BeginMap(false);
    writer.Key("entries");
    writer.BeginList(false);
    for (uint32_t i = 0; i < num_entries; i++)
    {
        writer.BeginMap(false);
        writer.Key("pattern");
        ProfileEntryPatternToJson(pipelineProfile.pEntries[i].pattern, &writer);

        writer.Key("action");
        ProfileEntryActionToJson(pipelineProfile.pEntries[i], &writer);
        writer.EndMap();
    }

    writer.EndList();
    writer.EndMap();
}

void ShaderProfile::ProfileEntryPatternToJson(PipelineProfilePattern pattern, Util::JsonWriter* pWriter)
{
    pWriter->BeginMap(false);
    if (pattern.match.always)
    {
        pWriter->Key("always");
        pWriter->Value(true);
    }

    if (pattern.match.shaderOnly)
    {
        pWriter->Key("shaderOnly");
        pWriter->Value(true);
    }

    uint32_t i = 0;
    for (auto shader : pattern.shaders)
    {
        // We don't want empty objects in JSON dump
        if (
            shader.match.stageActive ||
            shader.match.stageInactive ||
            shader.match.codeHash ||
            shader.match.codeSizeLessThan
           )
        {
            std::string shaderStageName = getShaderStageName(i);
            VK_ASSERT(shaderStageName.compare("unknown") != 0);

            pWriter->Key(shaderStageName.c_str());
            pWriter->BeginMap(false);

            if (shader.match.stageActive)
            {
                pWriter->Key("stageActive");
                pWriter->Value(true);
            }
            if (shader.match.stageInactive)
            {
                pWriter->Key("stageInactive");
                pWriter->Value(true);
            }
            if (shader.match.codeHash)
            {
                pWriter->Key("codeHash");
                std::string codeHash = int_to_hex(shader.codeHash.upper, shader.codeHash.lower);
                pWriter->Value(codeHash.c_str());
            }
            if (shader.match.codeSizeLessThan)
            {
                pWriter->Key("codeSizeLessThan");
                size_t codeSizeLessThanValue = static_cast<size_t>(shader.codeSizeLessThanValue);
                pWriter->Value(codeSizeLessThanValue);
            }

            pWriter->EndMap();
        }
        i++;
    }
    pWriter->EndMap();
}

void ShaderProfile::ProfileEntryActionToJson(PipelineProfileEntry entry, Util::JsonWriter* pWriter)
{
    PipelineProfilePattern pattern = entry.pattern;
    PipelineProfileAction  action  = entry.action;
    pWriter->BeginMap(false);

    if (action.createInfo.apply.binningOverride)
    {
        pWriter->Key("binningOverride");
        if (action.createInfo.binningOverride == Pal::BinningOverride::Default)
        {
            pWriter->Value(0u);
        }
        else if (action.createInfo.binningOverride == Pal::BinningOverride::Disable)
        {
            pWriter->Value(1u);
        }
        else if (action.createInfo.binningOverride == Pal::BinningOverride::Enable)
        {
            pWriter->Value(2u);
        }
    }
    if (action.createInfo.apply.lateAllocVsLimit)
    {
        pWriter->Key("lateAllocVsLimit");
        pWriter->Value(action.createInfo.lateAllocVsLimit);
    }

    uint32_t i = 0;
    for (auto shader : action.shaders)
    {
        // We don't want empty objects in JSON dump
        if (
            pattern.shaders[i].match.stageActive ||
            pattern.shaders[i].match.stageInactive ||
            pattern.shaders[i].match.codeHash ||
            pattern.shaders[i].match.codeSizeLessThan
           )
        {
            std::string shaderStageName = getShaderStageName(i);
            VK_ASSERT(shaderStageName.compare("unknown") != 0);

            pWriter->Key(shaderStageName.c_str());
            pWriter->BeginMap(false);

            if (shader.shaderCreate.apply.vgprLimit)
            {
                pWriter->Key("vgprLimit");
                pWriter->Value(shader.shaderCreate.tuningOptions.vgprLimit);
            }
            if (shader.shaderCreate.apply.sgprLimit)
            {
                pWriter->Key("sgprLimit");
                pWriter->Value(shader.shaderCreate.tuningOptions.sgprLimit);
            }
            if (shader.shaderCreate.apply.ldsSpillLimitDwords)
            {
                pWriter->Key("ldsSpillLimitDwords");
                pWriter->Value(shader.shaderCreate.tuningOptions.ldsSpillLimitDwords);
            }
            if (shader.shaderCreate.apply.maxArraySizeForFastDynamicIndexing)
            {
                pWriter->Key("maxArraySizeForFastDynamicIndexing");
                pWriter->Value(shader.shaderCreate.tuningOptions.maxArraySizeForFastDynamicIndexing);
            }
            if (shader.shaderCreate.apply.userDataSpillThreshold)
            {
                pWriter->Key("userDataSpillThreshold");
                pWriter->Value(shader.shaderCreate.tuningOptions.userDataSpillThreshold);
            }
            if (shader.shaderCreate.apply.maxThreadGroupsPerComputeUnit)
            {
                pWriter->Key("maxThreadGroupsPerComputeUnit");
                pWriter->Value(shader.shaderCreate.tuningOptions.maxThreadGroupsPerComputeUnit);
            }
            if (shader.shaderCreate.apply.trapPresent)
            {
                pWriter->Key("trapPresent");
                pWriter->Value(shader.shaderCreate.apply.trapPresent);
            }
            if (shader.shaderCreate.apply.debugMode)
            {
                pWriter->Key("debugMode");
                pWriter->Value(shader.shaderCreate.apply.debugMode);
            }
            if (shader.shaderCreate.apply.allowReZ)
            {
                pWriter->Key("allowReZ");
                pWriter->Value(shader.shaderCreate.apply.allowReZ);
            }
            if (shader.shaderCreate.apply.disableLoopUnrolls)
            {
                pWriter->Key("disableLoopUnrolls");
                pWriter->Value(shader.shaderCreate.apply.disableLoopUnrolls);
            }
            if (shader.shaderCreate.apply.waveSize)
            {
                pWriter->Key("waveSize");
                pWriter->Value(shader.shaderCreate.tuningOptions.waveSize);
            }
            if (shader.shaderCreate.apply.wgpMode)
            {
                pWriter->Key("wgpMode");
                pWriter->Value(shader.shaderCreate.tuningOptions.wgpMode);
            }
            if (shader.shaderCreate.apply.waveBreakSize)
            {
                pWriter->Key("waveBreakSize");
                pWriter->Value(shader.shaderCreate.tuningOptions.waveBreakSize);
            }
            if (shader.shaderCreate.apply.nggDisable)
            {
                pWriter->Key("nggDisable");
                pWriter->Value(shader.shaderCreate.apply.nggDisable);
            }
            if (shader.shaderCreate.apply.nggFasterLaunchRate)
            {
                pWriter->Key("nggFasterLaunchRate");
                pWriter->Value(shader.shaderCreate.apply.nggFasterLaunchRate);
            }
            if (shader.shaderCreate.apply.nggVertexReuse)
            {
                pWriter->Key("nggVertexReuse");
                pWriter->Value(shader.shaderCreate.apply.nggVertexReuse);
            }
            if (shader.shaderCreate.apply.nggEnableFrustumCulling)
            {
                pWriter->Key("nggEnableFrustumCulling");
                pWriter->Value(shader.shaderCreate.apply.nggEnableFrustumCulling);
            }
            if (shader.shaderCreate.apply.nggEnableBoxFilterCulling)
            {
                pWriter->Key("nggEnableBoxFilterCulling");
                pWriter->Value(shader.shaderCreate.apply.nggEnableBoxFilterCulling);
            }
            if (shader.shaderCreate.apply.nggEnableSphereCulling)
            {
                pWriter->Key("nggEnableSphereCulling");
                pWriter->Value(shader.shaderCreate.apply.nggEnableSphereCulling);
            }
            if (shader.shaderCreate.apply.nggEnableBackfaceCulling)
            {
                pWriter->Key("nggEnableBackfaceCulling");
                pWriter->Value(shader.shaderCreate.apply.nggEnableBackfaceCulling);
            }
            if (shader.shaderCreate.apply.nggEnableSmallPrimFilter)
            {
                pWriter->Key("nggEnableSmallPrimFilter");
                pWriter->Value(shader.shaderCreate.apply.nggEnableSmallPrimFilter);
            }
            if (shader.dynamicShaderInfo.apply.maxWavesPerCu)
            {
                pWriter->Key("maxWavesPerCu");
                pWriter->Value(shader.dynamicShaderInfo.maxWavesPerCu);
            }
            if (shader.dynamicShaderInfo.apply.maxThreadGroupsPerCu)
            {
                pWriter->Key("maxThreadGroupsPerCu");
                pWriter->Value(shader.dynamicShaderInfo.maxThreadGroupsPerCu);
            }
            if (shader.shaderCreate.apply.threadGroupSwizzleMode)
            {
                if (shader.shaderCreate.tuningOptions.threadGroupSwizzleMode == Vkgc::ThreadGroupSwizzleMode::Default)
                {
                    pWriter->Key("threadGroupSwizzleMode");
                    pWriter->Value("Default");
                }
                else if (shader.shaderCreate.tuningOptions.threadGroupSwizzleMode == Vkgc::ThreadGroupSwizzleMode::_4x4)
                {
                    pWriter->Key("threadGroupSwizzleMode");
                    pWriter->Value("_4x4");
                }
                else if (shader.shaderCreate.tuningOptions.threadGroupSwizzleMode == Vkgc::ThreadGroupSwizzleMode::_8x8)
                {
                    pWriter->Key("threadGroupSwizzleMode");
                    pWriter->Value("_8x8");
                }
                else if (shader.shaderCreate.tuningOptions.threadGroupSwizzleMode == Vkgc::ThreadGroupSwizzleMode::_16x16)
                {
                    pWriter->Key("threadGroupSwizzleMode");
                    pWriter->Value("_16x16");
                }

            }
            if (shader.shaderCreate.apply.overrideShaderThreadGroupSize)
            {
                pWriter->Key("overrideShaderThreadGroupSize");
                pWriter->Value(shader.shaderCreate.apply.overrideShaderThreadGroupSize);
            }
            if (shader.shaderCreate.tuningOptions.overrideShaderThreadGroupSizeX)
            {
                pWriter->Key("overrideShaderThreadGroupSizeX");
                pWriter->Value(shader.shaderCreate.tuningOptions.overrideShaderThreadGroupSizeX);
            }
            if (shader.shaderCreate.tuningOptions.overrideShaderThreadGroupSizeY)
            {
                pWriter->Key("overrideShaderThreadGroupSizeY");
                pWriter->Value(shader.shaderCreate.tuningOptions.overrideShaderThreadGroupSizeY);
            }
            if (shader.shaderCreate.tuningOptions.overrideShaderThreadGroupSizeZ)
            {
                pWriter->Key("overrideShaderThreadGroupSizeZ");
                pWriter->Value(shader.shaderCreate.tuningOptions.overrideShaderThreadGroupSizeZ);
            }
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.disableFMA)
            {
                pWriter->Key("disableFMA");
                pWriter->Value(shader.shaderCreate.tuningOptions.disableFMA);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.useSiScheduler)
            {
                pWriter->Key("useSiScheduler");
                pWriter->Value(shader.shaderCreate.tuningOptions.useSiScheduler);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.disableCodeSinking)
            {
                pWriter->Key("disableCodeSinking");
                pWriter->Value(shader.shaderCreate.tuningOptions.disableCodeSinking);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.favorLatencyHiding)
            {
                pWriter->Key("favorLatencyHiding");
                pWriter->Value(shader.shaderCreate.tuningOptions.favorLatencyHiding);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.reconfigWorkgroupLayout)
            {
                pWriter->Key("reconfigWorkgroupLayout");
                pWriter->Value(shader.shaderCreate.tuningOptions.reconfigWorkgroupLayout);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.forceLoopUnrollCount)
            {
                pWriter->Key("forceLoopUnrollCount");
                pWriter->Value(shader.shaderCreate.tuningOptions.forceLoopUnrollCount);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.enableLoadScalarizer)
            {
                pWriter->Key("enableLoadScalarizer");
                pWriter->Value(shader.shaderCreate.tuningOptions.enableLoadScalarizer);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.disableLicm)
            {
                pWriter->Key("disableLicm");
                pWriter->Value(shader.shaderCreate.tuningOptions.disableLicm);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.unrollThreshold)
            {
                pWriter->Key("unrollThreshold");
                pWriter->Value(shader.shaderCreate.tuningOptions.unrollThreshold);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.fp32DenormalMode)
            {
                if (shader.shaderCreate.tuningOptions.fp32DenormalMode == Vkgc::DenormalMode::Auto)
                {
                    pWriter->Key("fp32DenormalMode");
                    pWriter->Value("Auto");
                }
                else if (shader.shaderCreate.tuningOptions.fp32DenormalMode == Vkgc::DenormalMode::FlushToZero)
                {
                    pWriter->Key("fp32DenormalMode");
                    pWriter->Value("FlushToZero");
                }
                else if (shader.shaderCreate.tuningOptions.fp32DenormalMode == Vkgc::DenormalMode::Preserve)
                {
                    pWriter->Key("fp32DenormalMode");
                    pWriter->Value("Preserve");
                }

            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.fastMathFlags)
            {
                pWriter->Key("fastMathFlags");
                pWriter->Value(shader.shaderCreate.tuningOptions.fastMathFlags);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.disableFastMathFlags)
            {
                pWriter->Key("disableFastMathFlags");
                pWriter->Value(shader.shaderCreate.tuningOptions.disableFastMathFlags);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.nsaThreshold)
            {
                pWriter->Key("nsaThreshold");
                pWriter->Value(shader.shaderCreate.tuningOptions.nsaThreshold);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.aggressiveInvariantLoads)
            {
                if (shader.shaderCreate.tuningOptions.aggressiveInvariantLoads == Vkgc::InvariantLoads::Auto)
                {
                    pWriter->Key("aggressiveInvariantLoads");
                    pWriter->Value("Auto");
                }
                else if (shader.shaderCreate.tuningOptions.aggressiveInvariantLoads == Vkgc::InvariantLoads::EnableOptimization)
                {
                    pWriter->Key("aggressiveInvariantLoads");
                    pWriter->Value("EnableOptimization");
                }
                else if (shader.shaderCreate.tuningOptions.aggressiveInvariantLoads == Vkgc::InvariantLoads::DisableOptimization)
                {
                    pWriter->Key("aggressiveInvariantLoads");
                    pWriter->Value("DisableOptimization");
                }
                else if (shader.shaderCreate.tuningOptions.aggressiveInvariantLoads == Vkgc::InvariantLoads::ClearInvariants)
                {
                    pWriter->Key("aggressiveInvariantLoads");
                    pWriter->Value("ClearInvariants");
                }

            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.workaroundStorageImageFormats)
            {
                pWriter->Key("workaroundStorageImageFormats");
                pWriter->Value(shader.shaderCreate.apply.workaroundStorageImageFormats);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.scalarizeWaterfallLoads)
            {
                pWriter->Key("scalarizeWaterfallLoads");
                pWriter->Value(shader.shaderCreate.tuningOptions.scalarizeWaterfallLoads);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.backwardPropagateNoContract)
            {
                pWriter->Key("backwardPropagateNoContract");
                pWriter->Value(shader.shaderCreate.tuningOptions.backwardPropagateNoContract);
            }
#endif
#if ICD_BUILD_LLPC
            if (shader.shaderCreate.apply.forwardPropagateNoContract)
            {
                pWriter->Key("forwardPropagateNoContract");
                pWriter->Value(shader.shaderCreate.tuningOptions.forwardPropagateNoContract);
            }
#endif

            pWriter->EndMap();
        }
        i++;
    }
    pWriter->EndMap();
}

#if ICD_RUNTIME_APP_PROFILE
// =====================================================================================================================
// Generic code for parsing Json dump file using json_reader.

// Tests that each key in the given JSON object matches at least one of the keys in the array.
bool ShaderProfile::CheckValidKeys(
    utils::Json* pObject,
    size_t       numKeys,
    const char** pKeys)
{
    bool success = true;

    if ((pObject != nullptr) && (pObject->type == utils::JsonValueType::Object))
    {
        for (utils::Json* pChild = pObject->pChild; success && (pChild != nullptr); pChild = pChild->pNext)
        {
            if (pChild->pKey != nullptr)
            {
                bool found = false;

                for (size_t i = 0; (found == false) && (i < numKeys); ++i)
                {
                    found |= (strcmp(pKeys[i], pChild->pKey) == 0);
                }

                success &= found;
            }
        }
    }
    else
    {
        success = false;
    }

    return success;
}

bool ShaderProfile::ParseJsonProfile(
    utils::Json*                 pJson,
    PipelineProfile*             pProfile,
    const VkAllocationCallbacks* pAllocator)
{
/*  Example of the run-time profile:
    {
      "entries": [
        {
          "pattern": {
            "always": false,
            "vs": {
              "stageActive": true,
              "codeHash": "0x0 7B9BFA968C24EB11"
            }
          },
          "action": {
            "lateAllocVsLimit": 1000000,
            "vs": {
              "maxThreadGroupsPerComputeUnit": 10
            }
          }
        }
      ]
    }
*/

    bool success = true;

    if (pJson != nullptr)
    {
        utils::Json* pEntries  = utils::JsonGetValue(pJson, "entries");
        utils::Json* pPatterns = utils::JsonGetValue(pJson, "patterns");
        utils::Json* pActions  = utils::JsonGetValue(pJson, "actions");

        if (pEntries != nullptr)
        {
            for (utils::Json* pEntry = pEntries->pChild; (pEntry != nullptr) && success; pEntry = pEntry->pNext)
            {
                if (pProfile->entryCount < pProfile->entryCapacity)
                {
                    success &= ParseJsonProfileEntry(pPatterns, pActions, pEntry, &pProfile->pEntries[pProfile->entryCount++]);
                }
                else
                {
                    uint32_t newCapacity = pProfile->entryCapacity * 2;

                    size_t newSize = newCapacity * sizeof(PipelineProfileEntry);
                    void* pMemory = pAllocator->pfnAllocation(pAllocator->pUserData,
                                                              newSize,
                                                              VK_DEFAULT_MEM_ALIGN,
                                                              VK_SYSTEM_ALLOCATION_SCOPE_OBJECT);
                    if (pMemory != nullptr)
                    {
                        std::memset(pMemory, 0, newSize);

                        PipelineProfileEntry* pNewEntries = static_cast<PipelineProfileEntry*>(pMemory);
                        std::memcpy(pNewEntries, pProfile->pEntries, pProfile->entryCount * sizeof(PipelineProfileEntry));
                        pProfile->entryCapacity = newCapacity;

                        pAllocator->pfnFree(pAllocator->pUserData, pProfile->pEntries);
                        pProfile->pEntries = pNewEntries;

                        success &= ParseJsonProfileEntry(pPatterns, pActions, pEntry, &pProfile->pEntries[pProfile->entryCount++]);
                    }
                    else
                    {
                        success = false;
                    }
                }
            }
        }
    }
    else
    {
        success = false;
    }

    return success;
}

bool ShaderProfile::ParseJsonProfileEntry(
    utils::Json*          pPatterns,
    utils::Json*          pActions,
    utils::Json*          pEntry,
    PipelineProfileEntry* pProfileEntry)
{
    bool success = true;

    static const char* ValidKeys[] =
    {
        "pattern",
        "action",
        // BuildTypes key is added here only to maintain consistency. The value against this key (if any in JSON) is not read at runtime.
        "BuildTypes"
    };

    success &= CheckValidKeys(pEntry, VK_ARRAY_SIZE(ValidKeys), ValidKeys);

    PipelineProfileEntry entry = {};

    utils::Json* pPattern = utils::JsonGetValue(pEntry, "pattern");

    if (pPattern != nullptr)
    {
        if (pPattern->type == utils::JsonValueType::String)
        {
            pPattern = (pPatterns != nullptr) ? utils::JsonGetValue(pPatterns, pPattern->pStringValue) : nullptr;
        }
    }

    if ((pPattern != nullptr) && (pPattern->type != utils::JsonValueType::Object))
    {
        pPattern = nullptr;
    }

    utils::Json* pAction = utils::JsonGetValue(pEntry, "action");

    if (pAction != nullptr)
    {
        if (pAction->type == utils::JsonValueType::String)
        {
            pAction = (pActions != nullptr) ? utils::JsonGetValue(pActions, pAction->pStringValue) : nullptr;
        }
    }

    if ((pAction != nullptr) && (pAction->type != utils::JsonValueType::Object))
    {
        pAction = nullptr;
    }

    if ((pPattern != nullptr) && (pAction != nullptr))
    {
        success &= ParseJsonProfileEntryPattern(pPattern, &pProfileEntry->pattern);
        success &= ParseJsonProfileEntryAction(pAction, &pProfileEntry->action);
    }
    else
    {
        success = false;
    }

    return success;
}

bool ShaderProfile::ParseJsonProfileEntryPattern(
    utils::Json*            pJson,
    PipelineProfilePattern* pPattern)
{
    bool success = true;

    static const char* ValidKeys[] =
    {
        "always",
        "shaderOnly",
        "vs",
        "hs",
        "ds",
        "gs",
        "ps",
        "cs",
    };

    success &= CheckValidKeys(pJson, VK_ARRAY_SIZE(ValidKeys), ValidKeys);

    utils::Json* pItem = nullptr;

    if ((pItem = utils::JsonGetValue(pJson, "always")) != nullptr)
    {
        pPattern->match.always = pItem->booleanValue;
    }
    if ((pItem = utils::JsonGetValue(pJson, "shaderOnly")) != nullptr)
    {
        pPattern->match.shaderOnly = pItem->booleanValue;
    }
    if ((pItem = utils::JsonGetValue(pJson, "vs")) != nullptr)
    {
       success &= ParseJsonProfilePatternShader(pItem, ShaderStage::ShaderStageVertex, &pPattern->shaders[ShaderStage::ShaderStageVertex]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "hs")) != nullptr)
    {
       success &= ParseJsonProfilePatternShader(pItem, ShaderStage::ShaderStageTessControl, &pPattern->shaders[ShaderStage::ShaderStageTessControl]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "ds")) != nullptr)
    {
       success &= ParseJsonProfilePatternShader(pItem, ShaderStage::ShaderStageTessEval, &pPattern->shaders[ShaderStage::ShaderStageTessEval]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "gs")) != nullptr)
    {
       success &= ParseJsonProfilePatternShader(pItem, ShaderStage::ShaderStageGeometry, &pPattern->shaders[ShaderStage::ShaderStageGeometry]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "ps")) != nullptr)
    {
       success &= ParseJsonProfilePatternShader(pItem, ShaderStage::ShaderStageFragment, &pPattern->shaders[ShaderStage::ShaderStageFragment]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "cs")) != nullptr)
    {
       success &= ParseJsonProfilePatternShader(pItem, ShaderStage::ShaderStageCompute, &pPattern->shaders[ShaderStage::ShaderStageCompute]);
    }

    return success;
}

bool ShaderProfile::ParseJsonProfileEntryAction(
    utils::Json*           pJson,
    PipelineProfileAction* pAction)
{
    bool success = true;

    static const char* ValidKeys[] =
    {
        "binningOverride",
        "lateAllocVsLimit",
        "vs",
        "hs",
        "ds",
        "gs",
        "ps",
        "cs",
    };

    success &= CheckValidKeys(pJson, VK_ARRAY_SIZE(ValidKeys), ValidKeys);

    utils::Json* pItem = nullptr;

    if ((pItem = utils::JsonGetValue(pJson, "binningOverride")) != nullptr)
    {
        pAction->createInfo.apply.binningOverride = true;
        uint32_t binningOverride                  = static_cast<uint32_t>(pItem->integerValue);
        if (binningOverride == 0u)
        {
            pAction->createInfo.binningOverride = Pal::BinningOverride::Default;
        }
        else if (binningOverride == 1u)
        {
            pAction->createInfo.binningOverride = Pal::BinningOverride::Disable;
        }
        else if (binningOverride == 2u)
        {
            pAction->createInfo.binningOverride = Pal::BinningOverride::Enable;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "lateAllocVsLimit")) != nullptr)
    {
        pAction->createInfo.apply.lateAllocVsLimit = true;
        pAction->createInfo.lateAllocVsLimit       = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "vs")) != nullptr)
    {
       success &= ParseJsonProfileActionShader(pItem, ShaderStage::ShaderStageVertex, &pAction->shaders[ShaderStage::ShaderStageVertex]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "hs")) != nullptr)
    {
       success &= ParseJsonProfileActionShader(pItem, ShaderStage::ShaderStageTessControl, &pAction->shaders[ShaderStage::ShaderStageTessControl]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "ds")) != nullptr)
    {
       success &= ParseJsonProfileActionShader(pItem, ShaderStage::ShaderStageTessEval, &pAction->shaders[ShaderStage::ShaderStageTessEval]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "gs")) != nullptr)
    {
       success &= ParseJsonProfileActionShader(pItem, ShaderStage::ShaderStageGeometry, &pAction->shaders[ShaderStage::ShaderStageGeometry]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "ps")) != nullptr)
    {
       success &= ParseJsonProfileActionShader(pItem, ShaderStage::ShaderStageFragment, &pAction->shaders[ShaderStage::ShaderStageFragment]);
    }
    if ((pItem = utils::JsonGetValue(pJson, "cs")) != nullptr)
    {
       success &= ParseJsonProfileActionShader(pItem, ShaderStage::ShaderStageCompute, &pAction->shaders[ShaderStage::ShaderStageCompute]);
    }

    return success;
}

bool ShaderProfile::ParseJsonProfilePatternShader(
    utils::Json*          pJson,
    ShaderStage           shaderStage,
    ShaderProfilePattern* pPattern)
{
    bool success = true;

    static const char* ValidKeys[] =
    {
        "stageActive",
        "stageInactive",
        "codeHash",
        "codeSizeLessThan",
    };

    success &= CheckValidKeys(pJson, VK_ARRAY_SIZE(ValidKeys), ValidKeys);

    utils::Json* pItem = nullptr;

    if ((pItem = utils::JsonGetValue(pJson, "stageActive")) != nullptr)
    {
        pPattern->match.stageActive = pItem->booleanValue;
    }
    if ((pItem = utils::JsonGetValue(pJson, "stageInactive")) != nullptr)
    {
        pPattern->match.stageInactive = pItem->booleanValue;
    }
    if ((pItem = utils::JsonGetValue(pJson, "codeHash")) != nullptr)
    {
        // The hash is a 128-bit value interpreted from a JSON hex string.  It should be split by a space into two
        // 64-bit sections, e.g.: { "codeHash" : "0x1234567812345678 1234567812345678" }.
        char* pLower64 = nullptr;
        pPattern->match.codeHash = true;
        pPattern->codeHash.upper = strtoull(pItem->pStringValue, &pLower64, 16);
        pPattern->codeHash.lower = strtoull(pLower64, nullptr, 16);
    }
    if ((pItem = utils::JsonGetValue(pJson, "codeSizeLessThan")) != nullptr)
    {
        pPattern->match.codeSizeLessThan = true;
        pPattern->codeSizeLessThanValue  = static_cast<size_t>(pItem->integerValue);
    }

    return success;
}

bool ShaderProfile::ParseJsonProfileActionShader(
    utils::Json*         pJson,
    ShaderStage          shaderStage,
    ShaderProfileAction* pActions)
{
    bool success = true;

    static const char* ValidKeys[] =
    {
        "vgprLimit",
        "sgprLimit",
        "ldsSpillLimitDwords",
        "maxArraySizeForFastDynamicIndexing",
        "userDataSpillThreshold",
        "maxThreadGroupsPerComputeUnit",
        "trapPresent",
        "debugMode",
        "allowReZ",
        "disableLoopUnrolls",
        "waveSize",
        "wgpMode",
        "waveBreakSize",
        "nggDisable",
        "nggFasterLaunchRate",
        "nggVertexReuse",
        "nggEnableFrustumCulling",
        "nggEnableBoxFilterCulling",
        "nggEnableSphereCulling",
        "nggEnableBackfaceCulling",
        "nggEnableSmallPrimFilter",
        "maxWavesPerCu",
        "maxThreadGroupsPerCu",
        "threadGroupSwizzleMode",
        "threadIdSwizzleMode",
        "overrideShaderThreadGroupSize",
        "overrideShaderThreadGroupSizeX",
        "overrideShaderThreadGroupSizeY",
        "overrideShaderThreadGroupSizeZ",
        "disableFMA",
        "useSiScheduler",
        "disableCodeSinking",
        "favorLatencyHiding",
        "reconfigWorkgroupLayout",
        "forceLoopUnrollCount",
        "enableLoadScalarizer",
        "disableLicm",
        "unrollThreshold",
        "fp32DenormalMode",
        "fastMathFlags",
        "disableFastMathFlags",
        "nsaThreshold",
        "aggressiveInvariantLoads",
        "workaroundStorageImageFormats",
        "scalarizeWaterfallLoads",
        "backwardPropagateNoContract",
        "forwardPropagateNoContract",
    };

    success &= CheckValidKeys(pJson, VK_ARRAY_SIZE(ValidKeys), ValidKeys);

    utils::Json* pItem = nullptr;

    if ((pItem = utils::JsonGetValue(pJson, "vgprLimit")) != nullptr)
    {
        pActions->shaderCreate.apply.vgprLimit         = true;
        pActions->shaderCreate.tuningOptions.vgprLimit = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "sgprLimit")) != nullptr)
    {
        pActions->shaderCreate.apply.sgprLimit         = true;
        pActions->shaderCreate.tuningOptions.sgprLimit = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "ldsSpillLimitDwords")) != nullptr)
    {
        pActions->shaderCreate.apply.ldsSpillLimitDwords         = true;
        pActions->shaderCreate.tuningOptions.ldsSpillLimitDwords = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "maxArraySizeForFastDynamicIndexing")) != nullptr)
    {
        pActions->shaderCreate.apply.maxArraySizeForFastDynamicIndexing         = true;
        pActions->shaderCreate.tuningOptions.maxArraySizeForFastDynamicIndexing = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "userDataSpillThreshold")) != nullptr)
    {
        pActions->shaderCreate.apply.userDataSpillThreshold         = true;
        pActions->shaderCreate.tuningOptions.userDataSpillThreshold = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "maxThreadGroupsPerComputeUnit")) != nullptr)
    {
        pActions->shaderCreate.apply.maxThreadGroupsPerComputeUnit         = true;
        pActions->shaderCreate.tuningOptions.maxThreadGroupsPerComputeUnit = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "trapPresent")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.trapPresent = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "debugMode")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.debugMode = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "allowReZ")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.allowReZ = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "disableLoopUnrolls")) != nullptr)
    {
        if (pItem->booleanValue != 0)
        {
            pActions->shaderCreate.apply.disableLoopUnrolls = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "waveSize")) != nullptr)
    {
        pActions->shaderCreate.apply.waveSize         = true;
        pActions->shaderCreate.tuningOptions.waveSize = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "wgpMode")) != nullptr)
    {
        pActions->shaderCreate.apply.wgpMode         = true;
        pActions->shaderCreate.tuningOptions.wgpMode = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "waveBreakSize")) != nullptr)
    {
        pActions->shaderCreate.apply.waveBreakSize         = true;
        pActions->shaderCreate.tuningOptions.waveBreakSize = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggDisable")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggDisable = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggFasterLaunchRate")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggFasterLaunchRate = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggVertexReuse")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggVertexReuse = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggEnableFrustumCulling")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggEnableFrustumCulling = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggEnableBoxFilterCulling")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggEnableBoxFilterCulling = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggEnableSphereCulling")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggEnableSphereCulling = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggEnableBackfaceCulling")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggEnableBackfaceCulling = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "nggEnableSmallPrimFilter")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.nggEnableSmallPrimFilter = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "maxWavesPerCu")) != nullptr)
    {
        pActions->dynamicShaderInfo.apply.maxWavesPerCu = true;
        pActions->dynamicShaderInfo.maxWavesPerCu       = static_cast<uint32_t>(pItem->integerValue);
    }
    if ((pItem = utils::JsonGetValue(pJson, "maxThreadGroupsPerCu")) != nullptr)
    {
        if (shaderStage == ShaderStage::ShaderStageCompute)
        {
            pActions->dynamicShaderInfo.apply.maxThreadGroupsPerCu = true;
            pActions->dynamicShaderInfo.maxThreadGroupsPerCu       = static_cast<uint32_t>(pItem->integerValue);
        }
        else
        {
            success = false;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "threadGroupSwizzleMode")) != nullptr)
    {
        if (pItem->pStringValue != nullptr)
        {
            if (strcmp(pItem->pStringValue, "Default") == 0)
            {
                pActions->shaderCreate.apply.threadGroupSwizzleMode         = true;
                pActions->shaderCreate.tuningOptions.threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::Default;
            }
            else if (strcmp(pItem->pStringValue, "_4x4") == 0)
            {
                pActions->shaderCreate.apply.threadGroupSwizzleMode         = true;
                pActions->shaderCreate.tuningOptions.threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_4x4;
            }
            else if (strcmp(pItem->pStringValue, "_8x8") == 0)
            {
                pActions->shaderCreate.apply.threadGroupSwizzleMode         = true;
                pActions->shaderCreate.tuningOptions.threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_8x8;
            }
            else if (strcmp(pItem->pStringValue, "_16x16") == 0)
            {
                pActions->shaderCreate.apply.threadGroupSwizzleMode         = true;
                pActions->shaderCreate.tuningOptions.threadGroupSwizzleMode = Vkgc::ThreadGroupSwizzleMode::_16x16;
            }
            else
            {
                success = false;
            }
        }
        else
        {
            success = false;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "threadIdSwizzleMode")) != nullptr)
    {
        if (pItem->booleanValue != 0)
        {
            pActions->shaderCreate.tuningOptions.threadIdSwizzleMode = true;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "overrideShaderThreadGroupSize")) != nullptr)
    {
        if (pItem->booleanValue != 0)
        {
            pActions->shaderCreate.apply.overrideShaderThreadGroupSize = 1;
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "overrideShaderThreadGroupSizeX")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.tuningOptions.overrideShaderThreadGroupSizeX = static_cast<uint32_t>(pItem->integerValue);
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "overrideShaderThreadGroupSizeY")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.tuningOptions.overrideShaderThreadGroupSizeY = static_cast<uint32_t>(pItem->integerValue);
        }
    }
    if ((pItem = utils::JsonGetValue(pJson, "overrideShaderThreadGroupSizeZ")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.tuningOptions.overrideShaderThreadGroupSizeZ = static_cast<uint32_t>(pItem->integerValue);
        }
    }
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "disableFMA")) != nullptr)
    {
        pActions->shaderCreate.apply.disableFMA         = true;
        pActions->shaderCreate.tuningOptions.disableFMA = static_cast<uint32_t>(pItem->integerValue);
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "useSiScheduler")) != nullptr)
    {
        pActions->shaderCreate.apply.useSiScheduler         = true;
        pActions->shaderCreate.tuningOptions.useSiScheduler = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "disableCodeSinking")) != nullptr)
    {
        pActions->shaderCreate.apply.disableCodeSinking         = true;
        pActions->shaderCreate.tuningOptions.disableCodeSinking = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "favorLatencyHiding")) != nullptr)
    {
        pActions->shaderCreate.apply.favorLatencyHiding         = true;
        pActions->shaderCreate.tuningOptions.favorLatencyHiding = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "reconfigWorkgroupLayout")) != nullptr)
    {
        pActions->shaderCreate.apply.reconfigWorkgroupLayout         = true;
        pActions->shaderCreate.tuningOptions.reconfigWorkgroupLayout = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "forceLoopUnrollCount")) != nullptr)
    {
        pActions->shaderCreate.apply.forceLoopUnrollCount         = true;
        pActions->shaderCreate.tuningOptions.forceLoopUnrollCount = static_cast<uint32_t>(pItem->integerValue);
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "enableLoadScalarizer")) != nullptr)
    {
        pActions->shaderCreate.apply.enableLoadScalarizer         = true;
        pActions->shaderCreate.tuningOptions.enableLoadScalarizer = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "disableLicm")) != nullptr)
    {
        pActions->shaderCreate.apply.disableLicm         = true;
        pActions->shaderCreate.tuningOptions.disableLicm = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "unrollThreshold")) != nullptr)
    {
        pActions->shaderCreate.apply.unrollThreshold         = true;
        pActions->shaderCreate.tuningOptions.unrollThreshold = static_cast<uint32_t>(pItem->integerValue);
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "fp32DenormalMode")) != nullptr)
    {
        if (pItem->pStringValue != nullptr)
        {
            if (strcmp(pItem->pStringValue, "Auto") == 0)
            {
                pActions->shaderCreate.apply.fp32DenormalMode         = true;
                pActions->shaderCreate.tuningOptions.fp32DenormalMode = Vkgc::DenormalMode::Auto;
            }
            else if (strcmp(pItem->pStringValue, "FlushToZero") == 0)
            {
                pActions->shaderCreate.apply.fp32DenormalMode         = true;
                pActions->shaderCreate.tuningOptions.fp32DenormalMode = Vkgc::DenormalMode::FlushToZero;
            }
            else if (strcmp(pItem->pStringValue, "Preserve") == 0)
            {
                pActions->shaderCreate.apply.fp32DenormalMode         = true;
                pActions->shaderCreate.tuningOptions.fp32DenormalMode = Vkgc::DenormalMode::Preserve;
            }
            else
            {
                success = false;
            }
        }
        else
        {
            success = false;
        }
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "fastMathFlags")) != nullptr)
    {
        pActions->shaderCreate.apply.fastMathFlags         = true;
        pActions->shaderCreate.tuningOptions.fastMathFlags = static_cast<uint32_t>(pItem->integerValue);
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "disableFastMathFlags")) != nullptr)
    {
        pActions->shaderCreate.apply.disableFastMathFlags         = true;
        pActions->shaderCreate.tuningOptions.disableFastMathFlags = static_cast<uint32_t>(pItem->integerValue);
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "nsaThreshold")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.tuningOptions.nsaThreshold = static_cast<uint32_t>(pItem->integerValue);
        }
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "aggressiveInvariantLoads")) != nullptr)
    {
        if (pItem->pStringValue != nullptr)
        {
            if (strcmp(pItem->pStringValue, "Auto") == 0)
            {
                pActions->shaderCreate.apply.aggressiveInvariantLoads         = true;
                pActions->shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::Auto;
            }
            else if (strcmp(pItem->pStringValue, "EnableOptimization") == 0)
            {
                pActions->shaderCreate.apply.aggressiveInvariantLoads         = true;
                pActions->shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::EnableOptimization;
            }
            else if (strcmp(pItem->pStringValue, "DisableOptimization") == 0)
            {
                pActions->shaderCreate.apply.aggressiveInvariantLoads         = true;
                pActions->shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::DisableOptimization;
            }
            else if (strcmp(pItem->pStringValue, "ClearInvariants") == 0)
            {
                pActions->shaderCreate.apply.aggressiveInvariantLoads         = true;
                pActions->shaderCreate.tuningOptions.aggressiveInvariantLoads = Vkgc::InvariantLoads::ClearInvariants;
            }
            else
            {
                success = false;
            }
        }
        else
        {
            success = false;
        }
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "workaroundStorageImageFormats")) != nullptr)
    {
        if (pItem->integerValue != 0)
        {
            pActions->shaderCreate.apply.workaroundStorageImageFormats = 1;
        }
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "scalarizeWaterfallLoads")) != nullptr)
    {
        pActions->shaderCreate.apply.scalarizeWaterfallLoads         = true;
        pActions->shaderCreate.tuningOptions.scalarizeWaterfallLoads = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "backwardPropagateNoContract")) != nullptr)
    {
        pActions->shaderCreate.apply.backwardPropagateNoContract         = true;
        pActions->shaderCreate.tuningOptions.backwardPropagateNoContract = true;
    }
#endif
#if ICD_BUILD_LLPC
    if ((pItem = utils::JsonGetValue(pJson, "forwardPropagateNoContract")) != nullptr)
    {
        pActions->shaderCreate.apply.forwardPropagateNoContract         = true;
        pActions->shaderCreate.tuningOptions.forwardPropagateNoContract = true;
    }
#endif

    return success;
}
#endif

}
