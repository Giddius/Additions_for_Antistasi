/********************************************//**
*  \file Uniforms_CfgVehicles.hpp
*  \brief TODO: documentation
***********************************************/
#ifdef ITEMTYPE
#undef ITEMTYPE
#endif

#ifdef DISPLAYNAME
#undef DISPLAYNAME
#endif

#define ITEMTYPE BaseMan
#define DISPLAYNAME Base Policeman


//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄_ _▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//

class I_Soldier_base_F;

	/********************************************//**
	 *  \brief //TODO: documentation
	 *  \param [in] VARIANTX  Description for VARIANTX
	 *  \param [in] LONGNAMEX Description for LONGNAMEX
	 *  \return Return description
	 *  \details More details
	 ***********************************************/
	#define XVAR(VARIANTX,LONGNAMEX) \
	class CLASSNAME(VARIANTX) : I_Soldier_base_F \
	{ \
		AUTHOR \
		DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
		SCOPE_BASE \
		side = 1; \
		faction = QUOTE(bdsm_AfA_##VARIANTX##_Faction_police); \
		nakedUniform = "U_BasicBody"; \
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d"; \
		uniformClass = QUOTE(bdsm_AfA_##VARIANTX##_Uniform_police); \
		hiddenSelections[] = {"camo","insignia"}; \
		HIDDENSELECT_INSIGNIA_LINE_ONLYTEXFREE(Uniform_police,VARIANTX##_Uniform_police,bdsm_AfA_##VARIANTX##_Uniform_police_co.paa,VARIANTX) \
	};

	LIST_OF_XMAC
#undef XVAR

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#undef ITEMTYPE
#undef DISPLAYNAME

#define ITEMTYPE Spec_BaseMan
#define DISPLAYNAME Base Anti-Terror Operative

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class B_Soldier_04_f;

	/********************************************//**
	 *  \brief //TODO: documentation
	 *  \param [in] VARIANTX  Description for VARIANTX
	 *  \param [in] LONGNAMEX Description for LONGNAMEX
	 *  \return Return description
	 *  \details More details
	 ***********************************************/
	#define XVAR(VARIANTX,LONGNAMEX) \
	class CLASSNAME(VARIANTX) : B_Soldier_04_f \
	{ \
		AUTHOR \
		DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
		SCOPE_BASE \
		side = 1; \
		faction = QUOTE(bdsm_AfA_##VARIANTX##_Spec_Faction_police); \
		nakedUniform = "U_BasicBody"; \
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d"; \
		uniformClass = QUOTE(bdsm_AfA_##VARIANTX##_Spec_Uniform_police); \
		hiddenSelections[] = {"camo","insignia"}; \
		HIDDENSELECT_INSIGNIA_LINE_ONLYTEXFREE(Spec_Uniform_police,VARIANTX##_Spec_Uniform_police,bdsm_AfA_##VARIANTX##_Spec_Uniform_police_co.paa,VARIANTX) \
	};

	LIST_OF_XMAC
#undef XVAR

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#undef ITEMTYPE
#undef DISPLAYNAME