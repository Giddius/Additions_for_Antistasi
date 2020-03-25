/********************************************//**
 *  \file Helmets_CfgWeapons.hpp
 *  \brief TODO: documentation
 ***********************************************/

#ifdef ITEMTYPE
#undef ITEMTYPE
#endif

#ifdef DISPLAYNAME
#undef DISPLAYNAME
#endif

#define ITEMTYPE Helmet_VisorDown
#define DISPLAYNAME standard Police Helmet visor down

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	class CLASSNAME(Base) : H_HelmetB
	{
		AUTHOR
		SCOPE_BASE
		PLACEHOLDERUILINE
		DISPLAYNAMELINE(Base,DISPLAYNAME)
		MODELLINE(Base)
		HIDDENSELECT_LINE(Base)

		class ItemInfo: ItemInfo
		{
			STDMASSHELMET
			hiddenSelections[] = {"Camo"};
			UNIFORMMODELLINE(Base)
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.4;
				};
			};
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
			UILINE(VARIANTX) \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			SCOPE_NORM \
		\
			HIDDENSELECT_LINE_ONLYTEX(VARIANTX) \
		};

		LIST_OF_XMAC
		#undef XVAR


//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////


#undef ITEMTYPE
#undef DISPLAYNAME
#define ITEMTYPE Helmet_VisorUp
#define DISPLAYNAME standard Police Helmet visor up

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class CLASSNAME(Base) : H_HelmetB
	{
		AUTHOR
		SCOPE_BASE
		PLACEHOLDERUILINE
		DISPLAYNAMELINE(Base,DISPLAYNAME)
		MODELLINE(Base)
		HIDDENSELECT_LINEFREE(camo,Helmet_VisorDown_police,Base_Helmet_VisorDown_police,bdsm_AfA_Base_Helmet_VisorDown_police_co.paa)

		class ItemInfo: ItemInfo
		{
			STDMASSHELMET
			hiddenSelections[] = {"Camo"};
			UNIFORMMODELLINE(Base)
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.4;
				};
			};
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
			UILINE(VARIANTX) \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			SCOPE_NORM \
		\
			HIDDENSELECT_LINE_ONLYTEXFREE(Helmet_VisorDown_police,VARIANTX##_Helmet_VisorDown_police,bdsm_AfA_##VARIANTX##_Helmet_VisorDown_police_co.paa) \
		};

		LIST_OF_XMAC
#undef XVAR

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#undef ITEMTYPE
#undef DISPLAYNAME