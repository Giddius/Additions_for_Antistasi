/********************************************//**
 *  \file Vests_CfgWeapons.hpp
 *  \brief TODO: documentation
 ***********************************************/

#include "normalize_armor_to_rhs.hpp"


 #ifdef ITEMTYPE
#undef ITEMTYPE
#endif

#ifdef DISPLAYNAME
#undef DISPLAYNAME
#endif

#define ITEMTYPE Belt
#define DISPLAYNAME standard Police Belt

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Vest_Camo_Base : ItemCore
{
	class ItemInfo;
};

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

	class CLASSNAME(Base): Vest_Camo_Base
	{
		AUTHOR
		SCOPE_BASE
		DISPLAYNAMELINE(Base,DISPLAYNAME)
		MODELLINE(Base)
		HIDDENSELECT_LINE(Base)
		PLACEHOLDERUILINE
		descriptionShort = "No Armor";

		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			UNIFORMMODELLINE(Base)
			TINYCAPACITYVEST
			BELTMASSVEST
			armor = 0;
			descriptionShort = "No Armor";
			showHolsteredPistol = 1;
		};
	};

//-+-+-+-+-+-+-+-+-+-+-+-+-//

		/********************************************//**
		 *  \brief //TODO: documentation
		 *  \param [in] VARIANTX  Description for VARIANTX
		 *  \param [in] LONGNAMEX Description for LONGNAMEX
		 *  \return Return description
		 *  \details More details
		 ***********************************************/
		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX) : CLASSNAME(Base) \
		{ \
			AUTHOR \
			SCOPE_NORM \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			UILINE(VARIANTX) \
			HIDDENSELECT_LINE_ONLYTEX(VARIANTX) \
		};

		LIST_OF_XMAC
#undef XVAR


//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#undef ITEMTYPE
#undef DISPLAYNAME
