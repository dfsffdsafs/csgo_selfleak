// Copyright (c) 2019 TORExitNode
#include "singleton.hpp"
#include "menu_helpers.hpp"

enum class MenuAvailable : int
{
    RAGEBOT,
    LEGITBOT,
    VISUALS,
    MISC,
    SETTINGS
};

enum class VisualsMenuAvailable : int
{
    LOCAL,
    ENEMY,
    TEAM,
    MISC,
    GLOBAL
};

enum class RbotMenuAvailable : int
{
    STANDING,
    MOVING,
    AIR,
    MISC
};

enum class LbotWeaponsAvailable : int
{
    PISTOL,
    SMG,
    MG,
    RIFLE,
    SHOTGUN,
    SNIPER
};

#pragma once
class Menu : public Singleton<Menu>
{
public:
    Menu();
    void Initialize();
    void Render();

    /* sections */
    //void RenderLegitbot();
    void RenderRagebot();
    void RenderLegitbot();
    void RenderVisuals();
    void RenderMisc();
    void RenderSettings();
private:
    MenuHelper::components Components;
    //MenuFonts* fonts;
    //MenuFonts* Mfonts;
    bool Loaded = false;
};

