/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//

#define MAINDIR \BASEFOLDER\Addons\MODFOLDER


//  \return Belt_police
#define SHORTNAME GLUEII(ITEMTYPE,MODSUFFIX)


	 //  \return ACG_Belt_police
	#define VARIANTNAME(variant1) GLUEII(variant1,SHORTNAME)





		#define VARIANTNAMEII(variant1,extra1) GLUEIII(variant1,extra1,SHORTNAME)



		 //  \return bdsm_AfA_ACG_Belt_police
		#define CLASSNAME(variant1) GLUEII(GLOBALPREFIX,VARIANTNAME(variant1))





			#define CLASSNAMEII(variant1,extra1) GLUEII(GLOBALPREFIX,VARIANTNAMEII(variant1,extra1))

			#define CLASSNAMEFREE(variant1,type1) GLUEIV(bdsm_AfA,variant1,type1,MODSUFFIX)

			 //  \return bdsm_AfA_ACG_Belt_police.p3d
			#define MODELNAME(variant1) CLASSNAME(variant1).p3d



			 //  \return bdsm_AfA_ACG_Belt_police_co.paa
			#define TEXTURENAME(variant1) CLASSNAME(variant1)_co.paa
				#define NORMALTEXTURENAME(variant1) CLASSNAME(variant1)_nohq.paa
				#define SPECGLOSTEXTURENAME(variant1) CLASSNAME(variant1)_smdi.paa
				#define AMBOCTEXTURENAME(variant1) CLASSNAME(variant1)_as.paa



			 //  \return bdsm_AfA_ACG_Belt_police.rvmat
			#define MATERIALNAME(variant1) CLASSNAME(variant1).rvmat



			 //  \return bdsm_AfA_ACG_Belt_Icon_police_ca.paa
			#define UINAME(variant1) GLUEV(GLOBALPREFIX,variant1,ITEMTYPE,Icon,MODSUFFIX)_ca.paa





			#define MARKERNAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Marker,MODSUFFIX)_co.paa






			#define FLAGNAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Flag,MODSUFFIX)_co.paa





			#define INSIGNIANAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Insignia,MODSUFFIX)_ca.paa







			#define LOGONAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Logo,MODSUFFIX).paa
