
/********************************************//**
 *  \file path_macros.hpp
 *  \brief defines macros complete paths (including the actual name at the end).
 *  \brief Is dependent on name_macros.hpp and also the same as the names, needs ITEMTYPE definded and undefined (see name_macros)
 ***********************************************/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/********************************************//**
 *  \brief defines the main path, that is the same in every path used.
 *  \details Uses a leading "\"
 ***********************************************/
#define MAINDIR \BASEFOLDER\Addons\MODFOLDER

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//

/********************************************//**
 *  \brief creates direction to the Model. Name already included
 *  \param [in] variant1 ACG
 *  \return \test\pubsec\objects\Belt_police\bdsm_AfA_ACG_Belt_police.p3d
 *  \details uses VARIANTNAME so it needs the same input
 *  \details mostly used only with the Base class and Base Variant
 ***********************************************/
#define MODELDIR(variant1) MAINDIR\objects\SHORTNAME\MODELNAME(variant1)
	#define MODELDIRFREE(mdlfolder,mdlname) MAINDIR\objects\mdlfolder\mdlname

/********************************************//**
 *  \brief creates direction to the Color texture. Name already included
 *  \param [in] variant1 ACG
 *  \return \test\pubsec\objects\Belt_police\tex\ACG_Belt_police\bdsm_AfA_ACG_Belt_police_co.paa
 *  \details uses VARIANTNAME so it needs the same input
 ***********************************************/
#define TEXDIR(variant1) 	MAINDIR\objects\SHORTNAME\tex\VARIANTNAME(variant1)\TEXTURENAME(variant1)

	#define TEXDIRFREE(mdlfolder,vrfolder,texname) MAINDIR\objects\mdlfolder\tex\vrfolder\texname
/********************************************//**
 *  \brief creates direction to the RVMAT. Name already included
 *  \param [in] variant1 ACG
 *  \return \test\pubsec\objects\Belt_police\tex\bdsm_AfA_ACG_Belt_police.rvmat
 *  \details uses VARIANTNAME so it needs the same input
 ***********************************************/
#define MATDIR(variant1) 	MAINDIR\objects\SHORTNAME\tex\MATERIALNAME(variant1)

	#define MATDIRFREE(mdlfolder,mtname) 	MAINDIR\objects\mdlfolder\tex\mtname
/********************************************//**
 *  \brief creates direction to the Inventory UI picture. Name already included
 *  \param [in] variant1 ACG
 *  \return \test\pubsec\objects\Belt_police\ui\bdsm_AfA_ACG_Belt_Icon_police_ca.paa
 *  \details uses VARIANTNAME so it needs the same input
 ***********************************************/
#define UIDIR(variant1) 		MAINDIR\objects\SHORTNAME\ui\UINAME(variant1)

/********************************************//**
 *  \brief creates direction to the Flag texture. Name already included
 *  \param [in] variant1 ACG
 *  \return \test\pubsec\misc\flags\bdsm_AfA_ACG_Flag_police_co.paa
 *  \details
 ***********************************************/
#define FLAGDIR(variant1) 	MAINDIR\misc\flags\FLAGNAME(variant1)

/********************************************//**
 *  \brief creates direction to the Flag texture. Name already included
 *  \param [in] variant1 ACG
 *  \return \test\pubsec\misc\marker\bdsm_AfA_ACG_Marker_police_co.paa
 *  \details .
 ***********************************************/
#define MARKERDIR(variant1) 	MAINDIR\misc\marker\MARKERNAME(variant1)
		#define Q_MARKERDIR(variant1) QUOTE(MARKERDIR(variant1))

/********************************************//**
 *  \brief creates direction to the Insignia texture. Name already included
 *  \param [in] variant1 ACG
 *  \return \test\pubsec\misc\insignia\bdsm_AfA_ACG_Insignia_police_co.paa
 *  \details
 ***********************************************/
#define INSIGNIADIR(variant1) 	MAINDIR\misc\insignia\INSIGNIANAME(variant1)

/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define LOGODIR(variant1) 	MAINDIR\misc\logo\LOGONAME(variant1)