/********************************************//**
 *  \file X_EditorSubcat_Faction_Insignia_Marker.hpp
 *  \brief //TODO: documentation
 ***********************************************/



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class CfgEditorSubcategories
{

	#define XVAR(VARIANTX,LONGNAMEX) \
		class bdsm_AfA_##VARIANTX##_Infantry_EditSubCat_police \
		{ \
			displayname= VARIANTX LONGNAMEX Infantry; \
		};
	LIST_OF_XMAC
#undef XVAR

//-+-+-+-+-+-+-+-+-+-+-+-+-//

	#define XVAR(VARIANTX,LONGNAMEX) \
		class bdsm_AfA_##VARIANTX##_Spec_Infantry_EditSubCat_police \
		{ \
			displayname= VARIANTX LONGNAMEX Anti_Terror Infantry; \
		};
	LIST_OF_XMAC
#undef XVAR

//-+-+-+-+-+-+-+-+-+-+-+-+-//

	#define XVAR(VARIANTX,LONGNAMEX) \
		class bdsm_AfA_##VARIANTX##_Car_EditSubCat_police \
		{ \
			displayname= VARIANTX LONGNAMEX Car; \
		};
	LIST_OF_XMAC
#undef XVAR

//-+-+-+-+-+-+-+-+-+-+-+-+-//

	#define XVAR(VARIANTX,LONGNAMEX) \
		class bdsm_AfA_##VARIANTX##_Helo_EditSubCat_police \
		{ \
			displayname= VARIANTX LONGNAMEX Helicopter; \
		};
	LIST_OF_XMAC
#undef XVAR

};

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses
{

	class bdsm_AfA_Base_Faction_police
	{
		displayName = "Public Security Force";
		priority = -5;
		side = 1;
		//TODO: make logo and flag
		icon = Q_PLACEHOLDERLOGO ;
		flag = Q_PLACEHOLDERFLAG ;
		TF_RADIO_LINE
	};

		#define XVAR(VARIANTX,LONGNAMEX) \
		class bdsm_AfA_##VARIANTX##_Faction_police: bdsm_AfA_Base_Faction_police \
		{ \
			displayName = LONGNAMEX [##VARIANTX##]; \
			priority = -3; \
			LOGOLINE(VARIANTX) \
			FLAGLINE(VARIANTX) \
			TF_RADIO_LINE \
		}; \
			\
			class bdsm_AfA_##VARIANTX##_Spec_Faction_police: bdsm_AfA_##VARIANTX##_Faction_police \
			{ \
				displayName = VARIANTX Anti-Terror Unit; \
				priority = 0; \
				LOGOLINE(VARIANTX##_##Spec) \
				FLAGLINE(VARIANTX##_Spec) \
				TF_RADIO_LINE \
			};

			LIST_OF_XMAC
#undef XVAR

};

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////
class CfgUnitInsignia
{

	#define XVAR(VARIANTX,LONGNAMEX) \
		class bdsm_AfA_##VARIANTX##_Insignia_police \
			{ \
				DISPLAYNAMELINE(LONGNAMEX,Insignia) \
				AUTHOR \
				INSIGNIALINE(VARIANTX) \
				textureVehicle = ""; \
			};
	LIST_OF_XMAC
#undef XVAR

};

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

class CfgMarkers
{

	class flag_NATO;

	class bdsm_AfA_Base_Marker_police: flag_NATO
	{
		name = "Public Security Force";
		//icon = Q_MARKERDIR(Base);
		//texture = Q_MARKERDIR(Base);
		icon = Q_PLACEHOLDERMARKER ;
		texture = Q_PLACEHOLDERMARKER ;
	};

		#define XVAR(VARIANTX,LONGNAMEX) \
		class bdsm_AfA_##VARIANTX##_Marker_police: bdsm_AfA_Base_Marker_police \
		{ \
		name = QUOTE(LONGNAMEX); \
		icon = Q_MARKERDIR(VARIANTX); \
		texture = Q_MARKERDIR(VARIANTX); \
		};
		LIST_OF_XMAC
#undef XVAR

};

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

