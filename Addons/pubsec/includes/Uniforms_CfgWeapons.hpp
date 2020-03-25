/********************************************//**
 *  \file Uniforms_CfgWeapons.hpp
 *  \brief //TODO: documentation
 ***********************************************/

 #ifdef ITEMTYPE
#undef ITEMTYPE
#endif

#ifdef DISPLAYNAME
#undef DISPLAYNAME
#endif

#define ITEMTYPE Uniform
#define DISPLAYNAME Police Uniform

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	class Uniform_Base;
	class UniformItem;

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

	class CLASSNAME(BASE) : Uniform_Base
		{
			AUTHOR
			SCOPE_BASE
			DISPLAYNAMELINE(Base,DISPLAYNAME)
			PLACEHOLDERUILINE  //TODO make screenshot and exchange
			HIDDENSELECT_CAMO_INSIGNIA_LINE(Base)
			model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

				class ItemInfo: UniformItem
				{
					uniformModel = "-";
					STDCAPACITYUNIFORM
					STDMASSUNIFORM
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
			class CLASSNAME(VARIANTX) : CLASSNAME(BASE) \
			{ \
				SCOPE_NORM \
				DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
				UILINE(VARIANTX) \
				HIDDENSELECT_LINE_ONLYTEX(VARIANTX) \
				\
					class ItemInfo: UniformItem \
					{ \
						uniformClass = QUOTE(bdsm_AfA_##VARIANTX##_BaseMan_police); \
						STDCAPACITYUNIFORM \
						STDMASSUNIFORM \
					}; \
			};

			LIST_OF_XMAC
#undef XVAR



//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#undef ITEMTYPE
#undef DISPLAYNAME
#define ITEMTYPE Spec_Uniform
#define DISPLAYNAME Anti-Terror Unit Uniform

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class CLASSNAME(BASE) : Uniform_Base
		{
			AUTHOR
			SCOPE_BASE
			DISPLAYNAMELINE(Base,DISPLAYNAME)
			PLACEHOLDERUILINE  //TODO make screenshot and exchange
			HIDDENSELECT_CAMO_INSIGNIA_LINE(Base)
			model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

				class ItemInfo: UniformItem
				{
					uniformModel = "-";
					HIGHCAPACITYUNIFORM
					STDMASSUNIFORM
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
				class CLASSNAME(VARIANTX) : CLASSNAME(BASE) \
				{ \
					SCOPE_NORM \
					DISPLAYNAMELINE(VARIANTX,DISPLAYNAME) \
					UILINE(VARIANTX) \
					HIDDENSELECT_LINE_ONLYTEX(VARIANTX) \
					\
						class ItemInfo: UniformItem \
						{ \
						uniformClass = QUOTE(bdsm_AfA_##VARIANTX##_Spec_BaseMan_police); \
						HIGHCAPACITYUNIFORM \
						STDMASSUNIFORM \
						}; \
				};

				LIST_OF_XMAC
#undef XVAR


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef ITEMTYPE
#undef DISPLAYNAME