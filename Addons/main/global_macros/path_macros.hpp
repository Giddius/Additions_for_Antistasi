
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define MAINDIR \BASEFOLDER\Addons\MODFOLDER

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//


 //  \return \test\pubsec\objects\Belt_police\bdsm_AfA_ACG_Belt_police.p3d

#define MODELDIR(variant1) MAINDIR\objects\SHORTNAME\MODELNAME(variant1)
	#define MODELDIRFREE(mdlfolder,mdlname) MAINDIR\objects\mdlfolder\mdlname


 //  \return \test\pubsec\objects\Belt_police\tex\ACG_Belt_police\bdsm_AfA_ACG_Belt_police_co.paa

#define TEXDIR(variant1) 	MAINDIR\objects\SHORTNAME\tex\VARIANTNAME(variant1)\TEXTURENAME(variant1)

	#define TEXDIRFREE(mdlfolder,vrfolder,texname) MAINDIR\objects\mdlfolder\tex\vrfolder\texname

 //  \return \test\pubsec\objects\Belt_police\tex\bdsm_AfA_ACG_Belt_police.rvmat

#define MATDIR(variant1) 	MAINDIR\objects\SHORTNAME\tex\MATERIALNAME(variant1)

	#define MATDIRFREE(mdlfolder,mtname) 	MAINDIR\objects\mdlfolder\tex\mtname

 //  \return \test\pubsec\objects\Belt_police\ui\bdsm_AfA_ACG_Belt_Icon_police_ca.paa

#define UIDIR(variant1) 		MAINDIR\objects\SHORTNAME\ui\UINAME(variant1)


 //  \return \test\pubsec\misc\flags\bdsm_AfA_ACG_Flag_police_co.paa

#define FLAGDIR(variant1) 	MAINDIR\misc\flags\FLAGNAME(variant1)


 //  \return \test\pubsec\misc\marker\bdsm_AfA_ACG_Marker_police_co.paa

#define MARKERDIR(variant1) 	MAINDIR\misc\marker\MARKERNAME(variant1)
		#define Q_MARKERDIR(variant1) QUOTE(MARKERDIR(variant1))


 //  \return \test\pubsec\misc\insignia\bdsm_AfA_ACG_Insignia_police_co.paa

#define INSIGNIADIR(variant1) 	MAINDIR\misc\insignia\INSIGNIANAME(variant1)


#define LOGODIR(variant1) 	MAINDIR\misc\logo\LOGONAME(variant1)
