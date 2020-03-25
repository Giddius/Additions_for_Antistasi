/********************************************//**
 *  \file Patrol_Policeman_Soldiers.hpp
 *  \brief //TODO: documentation
 ***********************************************/

#ifdef ITEMTYPE
#undef ITEMTYPE
#endif

#ifdef DISPLAYNAME
#undef DISPLAYNAME
#endif

#define ITEMTYPE Standard_Man
#define DISPLAYNAME standard Policeman

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,BaseMan) \
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

#define ITEMTYPE Sergeant_Man
#define DISPLAYNAME Police Sergeant

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw","Binocular"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw","Binocular"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),"H_Beret_02","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),"H_Beret_02","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR

#undef ITEMTYPE
#undef DISPLAYNAME

#define ITEMTYPE Heavy_Man
#define DISPLAYNAME heavy armed standard Policeman

		#define XVAR(VARIANTX,LONGNAMEX) \
		class CLASSNAME(VARIANTX): CLASSNAMEFREE(VARIANTX,BaseMan) \
		{ \
			faction = CLASSNAMEFREE(VARIANTX,Faction) ; \
			side=1; \
			DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
			weapons[]={"rhsusf_weap_glock17g4","Put","Throw","Binocular"}; \
			respawnWeapons[]={"rhsusf_weap_glock17g4","Put","Throw","Binocular"}; \
			items[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			respawnItems[]={EQBASICMED,MULTIPLE_2(ACE_CableTie),"ACE_Flashlight_XL50"}; \
			magazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP}; \
			respawnMagazines[]={"SmokeShell",MULTIPLE_3(rhsusf_mag_17Rnd_9x19_JHP)}; \
			linkedItems[]={EQBELT(VARIANTX),"H_Beret_02","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"}; \
			respawnLinkedItems[]={EQBELT(VARIANTX),"H_Beret_02","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular"}; \
			backpack=""; \
		};
			LIST_OF_XMAC
#undef XVAR

#undef ITEMTYPE
#undef DISPLAYNAME