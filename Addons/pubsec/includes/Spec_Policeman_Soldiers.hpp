/********************************************//**
 *  \file Spec_Policeman_Soldiers.hpp
 *  \brief //TODO: documentation
 ***********************************************/

#ifdef ITEMTYPE
#undef ITEMTYPE
#endif

#ifdef DISPLAYNAME
#undef DISPLAYNAME
#endif

#define ITEMTYPE Spec_Man
#define DISPLAYNAME standard Anti-terror Policeman

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,Spec_BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR


#undef ITEMTYPE
#undef DISPLAYNAME


#define ITEMTYPE Leader_Spec_Man
#define DISPLAYNAME  Anti-terror Teamleader

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,Spec_BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR

#undef ITEMTYPE
#undef DISPLAYNAME


#define ITEMTYPE Medic_Spec_Man
#define DISPLAYNAME  Anti-terror Combat Medic

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,Spec_BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR

#undef ITEMTYPE
#undef DISPLAYNAME


#define ITEMTYPE Breacher_Spec_Man
#define DISPLAYNAME  Anti-terror Breacher Policeman

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,Spec_BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR


#undef ITEMTYPE
#undef DISPLAYNAME


#define ITEMTYPE Sniper_Spec_Man
#define DISPLAYNAME  Anti-terror Sniper

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,Spec_BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR

#undef ITEMTYPE
#undef DISPLAYNAME


#define ITEMTYPE Spotter_Spec_Man
#define DISPLAYNAME  Anti-terror Spotter

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,Spec_BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),EQHAT(VARIANTX),"G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR