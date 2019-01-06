// Copyright (c) 2019 TORExitNode
#include "singleton.hpp"
#include "valve_sdk\csgostructs.hpp"

#pragma once
class NoSmoke : public Singleton<NoSmoke>
{
public:
    void OnFrameStageNotify();
    /*
    	static std::vector<const char*> smoke_materials = {
    	"particle/vistasmokev1/vistasmokev1_fire",
    	"particle/vistasmokev1/vistasmokev1_smokegrenade",
    	"particle/vistasmokev1/vistasmokev1_emods",
    	"particle/vistasmokev1/vistasmokev1_emods_impactdust",
    };



    for (auto material_name : smoke_materials) {
    	IMaterial* mat = g_MatSystem->FindMaterial(material_name, TEXTURE_GROUP_OTHER);
    	mat->SetMaterialVarFlag(MATERIAL_VAR_WIREFRAME, true);
    }
    */
};

