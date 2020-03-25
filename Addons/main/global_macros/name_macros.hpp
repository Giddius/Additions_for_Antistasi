/********************************************//**
 *  \file name_macros.hpp
 *  \brief defines macros that expand to or create names, every name except the first 4 needs at least ITEMTYPE defined prior to usage and also undefined afterwards.
 ***********************************************/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//

#define MAINDIR \BASEFOLDER\Addons\MODFOLDER

/********************************************//**
 *  \brief creates the short name and is basis for all other names except UI
 *  \param [in] ITEMTYPE  Belt
 *  \param [in] MODSUFFIX police
 *  \return Belt_police
 *  \details ITEMTYPE needs to be defined for each new itemtype and afterwards undefined
 ***********************************************/
#define SHORTNAME GLUEII(ITEMTYPE,MODSUFFIX)

	/********************************************//**
	 *  \brief creates the variant name from the short name and the variant abbr. as input
	 *  \param [in] variant1 ACG
	 *  \return ACG_Belt_police
	  ***********************************************/
	#define VARIANTNAME(variant1) GLUEII(variant1,SHORTNAME)

		/********************************************//**
		 *  \brief TODO: documentation
		 *  \param [in] variant1 Description for variant1
		 *  \param [in] extra1   Description for extra1
		 *  \return Return description
		 *  \details More details
		 ***********************************************/
		#define VARIANTNAMEII(variant1,extra1) GLUEIII(variant1,extra1,SHORTNAME)

		/********************************************//**
		 *  \brief creates class name by adding the Global preffix to the front
		 *  \param [in] variant1 ACG
		 *  \return bdsm_AfA_ACG_Belt_police
		 *  \details uses VARIANTNAME so it needs the same input
		 ***********************************************/
		#define CLASSNAME(variant1) GLUEII(GLOBALPREFIX,VARIANTNAME(variant1))

			/********************************************//**
			 *  \brief TODO: documentation
			 *  \param [in] variant1 Description for variant1
			 *  \param [in] extra1   Description for extra1
			 *  \return Return description
			 *  \details More details
			 ***********************************************/
			#define CLASSNAMEII(variant1,extra1) GLUEII(GLOBALPREFIX,VARIANTNAMEII(variant1,extra1))

			#define CLASSNAMEFREE(variant1,type1) GLUEIV(bdsm_AfA,variant1,type1,MODSUFFIX)
			/********************************************//**
			 *  \brief creates the modelname by just adding ".p3d" as extension to the classname
			 *  \param [in] variant1 ACG
			 *  \return bdsm_AfA_ACG_Belt_police.p3d
			 *  \details uses VARIANTNAME so it needs the same input
			 ***********************************************/
			#define MODELNAME(variant1) CLASSNAME(variant1).p3d

			/********************************************//**
			 *  \defgroup macrogroup4 The Texture Name Macros
			 *  \brief creates the color texture name by adding _co.paa to the class name
			 *  \param [in] variant1 ACG
			 *  \return bdsm_AfA_ACG_Belt_police_co.paa
			 *  \details uses VARIANTNAME so it needs the same input
			 *  \details the 3 child macros are actually not used and just there if I want to put out all asset names for an item
			 ***********************************************/

			#define TEXTURENAME(variant1) CLASSNAME(variant1)_co.paa /**< \addtogroup macrogroup4 */
				#define NORMALTEXTURENAME(variant1) CLASSNAME(variant1)_nohq.paa /**< \addtogroup macrogroup4 */
				#define SPECGLOSTEXTURENAME(variant1) CLASSNAME(variant1)_smdi.paa /**< \addtogroup macrogroup4 */
				#define AMBOCTEXTURENAME(variant1) CLASSNAME(variant1)_as.paa /**< \addtogroup macrogroup4 */

			/********************************************//**
			 *  \brief Creates the rvmat name by adding .rvmat to the classname
			 *  \param [in] variant1 ACG
			 *  \return bdsm_AfA_ACG_Belt_police.rvmat
			 *  \details uses VARIANTNAME so it needs the same input
			 ***********************************************/
			#define MATERIALNAME(variant1) CLASSNAME(variant1).rvmat

			/********************************************//**
			 *  \brief creates the name for the Inventory UI picture
			 *  \param [in] variant1 ACG
			 *  \return bdsm_AfA_ACG_Belt_Icon_police_ca.paa
			 *  \details uses VARIANTNAME so it needs the same input
			 *  \details needs a completely different syntax, so it is only dependent on the Base name macros
			 ***********************************************/
			#define UINAME(variant1) GLUEV(GLOBALPREFIX,variant1,ITEMTYPE,Icon,MODSUFFIX)_ca.paa

			/********************************************//**
			 *  \brief TODO: documentation
			 *  \param [in] variant1 Description for variant1
			 *  \return Return description
			 *  \details More details
			 ***********************************************/
			#define MARKERNAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Marker,MODSUFFIX)_co.paa


			/********************************************//**
			 *  \brief TODO: documentation
			 *  \param [in] variant1 Description for variant1
			 *  \return Return description
			 *  \details More details
			 ***********************************************/
			#define FLAGNAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Flag,MODSUFFIX)_co.paa

			/********************************************//**
			 *  \brief TODO: documentation
			 *  \param [in] variant1 Description for variant1
			 *  \return Return description
			 *  \details More details
			 ***********************************************/
			#define INSIGNIANAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Insignia,MODSUFFIX)_ca.paa



			/********************************************//**
			 *  \brief TODO: documentation
			 *  \param [in] variant1 Description for variant1
			 *  \return Return description
			 *  \details More details
			 ***********************************************/
			#define LOGONAME(variant1) GLUEIV(GLOBALPREFIX,variant1,Logo,MODSUFFIX).paa