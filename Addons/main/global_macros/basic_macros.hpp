/********************************************//**
 *  \file basic_macros.hpp
 *  \brief Defines Macros that are frequently used and need no prior input
 ***********************************************/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/********************************************//**
 *  \defgroup macrogroup1 The GLUE Macros
 *  \brief defines the macro used for glueing words together with a "_" in between. The roman numeral tells you how many words it glues together and have to be provided.
 *
 *  \param [in] var1 string1
 *  \param [in] var2 string2
 *  \return string1_string2
 *  \details More details
 ***********************************************/
/** \addtogroup macrogroup1 */
#define GLUEII(var1,var2) ##var1##_##var2##
	/** \addtogroup macrogroup1 */
	#define GLUEIII(var1,var2,var3) ##var1##_##var2##_##var3##
		/** \addtogroup macrogroup1 */
		#define GLUEIV(var1,var2,var3,var4) ##var1##_##var2##_##var3##_##var4##
			/** \addtogroup macrogroup1 */
			#define GLUEV(var1,var2,var3,var4,var5) ##var1##_##var2##_##var3##_##var4##_##var5##
				/** \addtogroup macrogroup1 */
				#define GLUEVI(var1,var2,var3,var4,var5,var6) ##var1##_##var2##_##var3##_##var4##_##var5##_##var6##


//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//
/********************************************//**
 *  \brief defines the macro that puts a string into Quotes ""
 *
 *  \param [in] var1 string1
 *  \return "string1"
 *  \details More details
 ***********************************************/
#define QUOTE(var1) #var1

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//

	#define MULTIPLE_2(item1) QUOTE(item1),QUOTE(item1)
		#define MULTIPLE_3(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1)
			#define MULTIPLE_4(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
				#define MULTIPLE_5(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
					#define MULTIPLE_6(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
						#define MULTIPLE_7(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
							#define MULTIPLE_8(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
								#define MULTIPLE_9(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
									#define MULTIPLE_10(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)

//-+-+-+-+-+-+-+-+-+-+-+-+-//

	#define MULTIPLE_2(item1) QUOTE(item1),QUOTE(item1)
		#define MULTIPLE_3(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1)
			#define MULTIPLE_4(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
				#define MULTIPLE_5(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
					#define MULTIPLE_6(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
						#define MULTIPLE_7(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
							#define MULTIPLE_8(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
								#define MULTIPLE_9(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)
									#define MULTIPLE_10(item1) QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1),QUOTE(item1)





#include "\AfA\Addons\main\global_macros\normalize_armor_to_rhs.hpp"

#include "\AfA\Addons\main\global_macros\basic_defines.hpp"

#include "\AfA\Addons\main\global_macros\Global_fixed_name_macros.hpp"

	#include "\AfA\Addons\main\global_macros\name_macros.hpp"

		#include "\AfA\Addons\main\global_macros\path_macros.hpp"

			#include "\AfA\Addons\main\global_macros\misc_macros.hpp"

				#include "\AfA\Addons\main\global_macros\line_macros.hpp"


#include "\AfA\Addons\main\global_macros\Placeholder_macros.hpp"