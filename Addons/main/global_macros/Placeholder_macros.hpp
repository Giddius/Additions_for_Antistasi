/********************************************//**
 *  \defgroup macrogroupplaceholder The Placeholder Macros
 *  \brief defines the macro used for placeholder Flag, Insignia, Marker and UI textures.
 ***********************************************/
/** \addtogroup macrogroupplaceholder */
#define PLACEHOLDERFLAG MAINDIR\placeholder\bdsm_AfA_Placeholder_Flag_##MODSUFFIX##_co.paa
/** \addtogroup macrogroupplaceholder */
#define PLACEHOLDERINSIGNIA MAINDIR\placeholder\bdsm_AfA_Placeholder_Insignia_##MODSUFFIX##_ca.paa
/** \addtogroup macrogroupplaceholder */
#define PLACEHOLDERMARKER MAINDIR\placeholder\bdsm_AfA_Placeholder_Marker_##MODSUFFIX##_co.paa
/** \addtogroup macrogroupplaceholder */
#define PLACEHOLDERUI MAINDIR\placeholder\bdsm_AfA_Placeholder_Icon_##MODSUFFIX##_ca.paa
/** \addtogroup macrogroupplaceholder */
#define PLACEHOLDERLOGO MAINDIR\placeholder\bdsm_AfA_Placeholder_Logo_##MODSUFFIX##.paa

	/** \addtogroup macrogroupplaceholder */
	#define Q_PLACEHOLDERFLAG QUOTE(PLACEHOLDERFLAG)
	/** \addtogroup macrogroupplaceholder */
	#define Q_PLACEHOLDERINSIGNIA QUOTE(PLACEHOLDERINSIGNIA)
	/** \addtogroup macrogroupplaceholder */
	#define Q_PLACEHOLDERMARKER QUOTE(PLACEHOLDERMARKER)
	/** \addtogroup macrogroupplaceholder */
	#define Q_PLACEHOLDERUI QUOTE(PLACEHOLDERUI)
	/** \addtogroup macrogroupplaceholder */
	#define Q_PLACEHOLDERLOGO QUOTE(PLACEHOLDERLOGO)

	/** \addtogroup macrogroupplaceholder */
	#define PLACEHOLDERUILINE picture = Q_PLACEHOLDERUI ;

	#define PLACEHOLDERINSIGNIALINE texture = Q_INSIGNIALINE ;