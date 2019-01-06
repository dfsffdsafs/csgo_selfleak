// Copyright (c) 2019 TORExitNode
#include "valve_sdk/csgostructs.hpp"
#include "features/MaterialManager.hpp"

enum class ChamsModes : int
{
    NORMAL,
    FLAT,
    WIREFRAME,
    GLASS,
    METALLIC,
    XQZ,
    METALLIC_XQZ,
    FLAT_XQZ
};

#pragma once
class Chams : public Singleton<Chams>
{
public:
    void OnSceneEnd();
};

