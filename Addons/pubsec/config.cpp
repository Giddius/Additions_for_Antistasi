//-+-+-+-+-+-+-+-+-+-+-+-+-//
// Type: .cpp config
//
// Submod: pubsec
//
// External Files called:
// - Submod_name_macros.hpp
// - \AfA\Addons\main\global_macros\basic_macros.hpp
// - \AfA\Addons\pubsec\macros\X_macros\X_macro_variant_define.hpp
// - \AfA\Addons\pubsec\macros\X_EditorSubcat_Faction_Insignia_Marker.hpp
// - \AfA\Addons\pubsec\macros\Hats_CfgWeapons.hpp
// - \AfA\Addons\pubsec\macros\Helmets_CfgWeapons.hpp
// - \AfA\Addons\pubsec\macros\Vests_CfgWeapons.hpp
// - \AfA\Addons\pubsec\macros\Uniforms_CfgWeapons.hpp
// - \AfA\Addons\pubsec\macros\Uniforms_CfgVehicles.hpp
// - \AfA\Addons\pubsec\macros\Patrol_Policeman_Soldiers.hpp
//
// This file is called by:
// -
// -
//
// Note: Main config for the pubsec submod
//
//-+-+-+-+-+-+-+-+-+-+-+-+-//

//needs to be defined for PBO Project tool, Is ESSENTIAL!
#define _ARMA_

//defines the Submod Foldername and Suffix, Is ESSENTIAL!
#include "Submod_name_macros.hpp"

//defines the base Macros and calls in all other base Macro files. See Macro documentation Readme. Is ESSENTIAL!
#include "\AfA\Addons\main\global_macros\basic_macros.hpp"


//defines the XMACRO Variants used in the rest of this Submods config. Explanation in Macro documentation Readme.
#include "\AfA\Addons\pubsec\macros\X_macros\X_macro_variant_define.hpp"


//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//

class CfgPatches //needs to always be in an Arma config
{
	class MODFOLDER //name is taken from Macro define in "Submod_name_macros.hpp"
	{
		units[] = {};
		weapons[] ={};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_main","A3_Characters_F","A3_Data_f","A3_Weapons_F","A3_Characters_F_Proxies"}; //declaring needed external Addons. Worst-case will be corrected by PBO Project
	};
};


//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄_Editor Subcategories, Factions, Insignia, Markers_▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//

//combined file to generate Editor Subcategories, Factions, Insignia, Markers using XMacros
#include "\AfA\Addons\pubsec\macros\X_EditorSubcat_Faction_Insignia_Marker.hpp"

//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄_Cfg Weapons_▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//

class CfgWeapons
{
	#include "\AfA\Addons\pubsec\macros\Hats_CfgWeapons.hpp" //generates Police Hat entries using XMacros

	#include "\AfA\Addons\pubsec\macros\Helmets_CfgWeapons.hpp" //generates Police Helmet entries using XMacros

	#include "\AfA\Addons\pubsec\macros\Vests_CfgWeapons.hpp" //generates Police Vests (currently only Belt) entries using XMacros

	#include "\AfA\Addons\pubsec\macros\Uniforms_CfgWeapons.hpp" //generates Police Uniform entries using XMacros
};

//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄_Cfg Vehicles_▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//

class CfgVehicles
{
	#include "\AfA\Addons\pubsec\macros\Uniforms_CfgVehicles.hpp" //generates Police Uniform entries that are required in CfgVehicles using XMacros

	#include "\AfA\Addons\pubsec\macros\Patrol_Policeman_Soldiers.hpp" //generates standard Police Soldiers
};

//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄_Cfg Groups _▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//

class CfgGroups
{

};

//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄_End of Config_▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
