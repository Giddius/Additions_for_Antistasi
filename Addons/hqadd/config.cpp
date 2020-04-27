#define _ARMA_

#include "Submod_name_macros.hpp"

#include "\AfA\Addons\main\global_macros\basic_macros.hpp"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class CfgPatches
{
	class bdsm_AfA_hqadd
	{
		units[] = {};
		weapons[] ={};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Data_f","A3_Weapons_F","A3_Characters_F_Proxies"};
	};
};





class CfgVehicles
{
    #include "HQBunker.hpp"
}
