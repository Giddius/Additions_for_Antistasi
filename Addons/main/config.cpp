#define _ARMA_

#include "Submod_name_macros.hpp"

#include "\AfA\Addons\main\global_macros\basic_macros.hpp"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "X_macro_variant_define.hpp"

//nununununununununununununununununununununununununununununununnunununununununununununununununununun//
//»»————-:<:>:<:>:<:>:<:>:<:>:<:>:<:>:<:>:<:>:<:>:<:>:<:>:<:><:>:<:>:<:>:<:>:<:>:<:>:<:>:<:>:————-««//
//nununununununununununununununununununununununununununununununnunununununununununununununununununun//

class CfgPatches
{
	class bdsm_AfA_main
	{
		units[] = {};
		weapons[] ={};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_main","A3_Characters_F","A3_Data_f","A3_Weapons_F","A3_Characters_F_Proxies","bdsm_AfA_hqadd"};
	};
};

class CfgEditorCategories
{
	class bdsm_AfA_all
	{
		displayName = "AfA Objects/Structures";
	};
};

 #include "X_EditorSubcat_Faction_Insignia_Marker.hpp"
