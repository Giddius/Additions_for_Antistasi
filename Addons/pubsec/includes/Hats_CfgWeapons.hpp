/********************************************//**
 *  \file Hats_CfgWeapons.hpp
 *  \brief TODO: documentation
 ***********************************************/

#ifdef ITEMTYPE
#undef ITEMTYPE
#endif

#ifdef DISPLAYNAME
#undef DISPLAYNAME
#endif

#define ITEMTYPE Hat
#define DISPLAYNAME standard Police Hat
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class ItemCore;
class H_HelmetB : ItemCore
{
	class ItemInfo;
};
class HeadGearItem;

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

	/********************************************//**
	 *  \brief //TODO: documentation
	 *  \param [in] Base Description for Base
	 *  \return Return description
	 *  \details More details
	 ***********************************************/
	class CLASSNAME(Base) : H_HelmetB
	{
		AUTHOR
		SCOPE_BASE
		PLACEHOLDERUILINE
		DISPLAYNAMELINE(Base,DISPLAYNAME)
		MODELLINE(Base)
		HIDDENSELECT_LINE(BASE)

		class ItemInfo : HeadGearItem
		{
			STDMASSHAT
			UNIFORMMODELLINE(Base)
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
		};
	};

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

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
			UILINE(VARIANTX) \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			HIDDENSELECT_LINE_ONLYTEX(VARIANTX) \
		};

		LIST_OF_XMAC
		#undef XVAR

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef ITEMTYPE
#undef DISPLAYNAME