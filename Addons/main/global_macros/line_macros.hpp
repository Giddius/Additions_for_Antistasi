/********************************************//**
 *  \file line_macros.hpp
 *  \brief TODO: documentation
 ***********************************************/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 /********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \param [in] extra1   Description for extra1
 *  \return Return description
 *  \details More details
 ***********************************************/
 #define DISPLAYNAMELINE(variant1,extra1) displayName = QUOTE(variant1 extra1) ;

/********************************************//**
 *  \brief defines the macro to output the whole line needed for author, puts the Author as "Giddi"
 *  \details More details
 ***********************************************/
#define AUTHOR author = "Giddi";

/********************************************//**
 *  \defgroup macrogroup2 The SCOPE Macros
 *  \brief defines the macro used for filling all needed lines regarding the items scope. Base for Baseclasses and Norm for everything else.
 ***********************************************/
#define SCOPE_BASE \
scope = 0; \
scopeArsenal = 0; \
scopeCurator = 0; \
weaponPoolAvailable = 0;

/** \addtogroup macrogroup2 */
#define SCOPE_NORM \
scope = 2; \
scopeArsenal = 2; \
scopeCurator = 2; \
weaponPoolAvailable = 1;

/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define MODELLINE(variant1) model = QUOTE(MODELDIR(variant1)) ;

/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define HIDDENSELECT_LINE(variant1) \
hiddenSelections[] = {"Camo"} ; \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1))} ;

#define HIDDENSELECT_CAMO_INSIGNIA_LINE(variant1) \
hiddenSelections[] = {"Camo","Insignia"} ; \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1)),QUOTE(INSIGNIADIR(variant1))} ;

#define HIDDENSELECT_LINEFREE(caselect,mdlfolder,vrfolder,texname) \
hiddenSelections[] = {QUOTE(caselect)}; \
hiddenSelectionsTextures[] = {QUOTE(TEXDIRFREE(mdlfolder,vrfolder,texname))};

/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define HIDDENSELECT_LINE_ONLYTEX(variant1) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1))};

#define HIDDENSELECTCAMO_INSIGNIA_LINE_ONLYTEX(variant1) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1)),QUOTE(INSIGNIADIR(variant1))};

#define HIDDENSELECT_LINE_ONLYTEXFREE(mdlfolder,vrfolder,texname) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIRFREE(mdlfolder,vrfolder,texname))};

#define HIDDENSELECT_INSIGNIA_LINE_ONLYTEXFREE(mdlfolder,vrfolder,texname,variant1) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIRFREE(mdlfolder,vrfolder,texname)),QUOTE(INSIGNIADIR(variant1))};
/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define UILINE(variant1) picture = QUOTE(UIDIR(variant1));

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//

/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define LOGOLINE(variant1) icon = QUOTE(LOGODIR(variant1));

/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define FLAGLINE(variant1) flag = QUOTE(FLAGDIR(variant1));

/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define INSIGNIALINE(variant1) texture = QUOTE(INSIGNIADIR(variant1));

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//

/********************************************//**
 *  \brief Brief description
 *  \param [in] capacity Description for capacity
 *  \return Return description
 *  \details More details
 ***********************************************/
#define SUPPLYCLASSVALUE(capacity) Supply##capacity
#define SUPPLYCLASSLINE(capacity) containerClass = QUOTE(SUPPLYCLASSVALUE(capacity));


/********************************************//**
 *  \brief Brief description
 *  \param [in] weight Description for weight
 *  \return Return description
 *  \details More details
 ***********************************************/
#define MASSLINE(var1) mass = var1 ;


/********************************************//**
 *  \brief TODO: documentation
 *  \param [in] variant1 Description for variant1
 *  \return Return description
 *  \details More details
 ***********************************************/
#define UNIFORMMODELLINE(variant1) uniformModel = QUOTE(MODELDIR(variant1)) ;

//-+-+-+-+-+-+-+-+-+-+-+-+-// SUPPLYCLASS-MACROS //-+-+-+-+-+-+-+-+-+-+-+-+-//

#define NOSUPPLYCAPACITY containerClass = "0";

#define STDCAPACITYUNIFORM containerClass = "Supply40";
    #define TINYCAPACITYUNIFORM containerClass = "Supply20";
        #define LOWCAPACITYUNIFORM containerClass = "Supply30";

            #define HIGHCAPACITYUNIFORM containerClass = "Supply60";
                #define HUGECAPACITYUNIFORM containerClass = "Supply80";


#define STDCAPACITYVEST containerClass = "Supply120";
    #define TINYCAPACITYVEST containerClass = "Supply40";
        #define LOWCAPACITYVEST containerClass = "Supply80";

            #define HIGHCAPACITYVEST containerClass = "Supply140";
                #define HUGECAPACITYVEST containerClass = "Supply160";
                    #define UNREALCAPACITYVEST containerClass = "Supply500";

//-+-+-+-+-+-+-+-+-+-+-+-+-// MASSCLASS-MACROS //-+-+-+-+-+-+-+-+-+-+-+-+-//

#define STDMASSUNIFORM mass = 40;
    #define LOWMASSUNIFORM mass = 30;

        #define HIGHMASSUNIFORM mass = 60;


#define STDMASSVEST mass = 80;
        #define TINYMASSVEST mass = 40;
            #define LOWMASSVEST mass = 60;

                #define HIGHMASSVEST mass = 120;
                    #define HUGEMASSVEST mass = 140;
                        #define UNREALMASSVEST mass = 160;


#define STDMASSHAT mass = 10;
    #define LOWMASSHAT mass = 5;

        #define HIGHMASSHAT mass = 15;


#define STDMASSHELMET mass = 40;
    #define LOWMASSHELMET mass = 30;

        #define HIGHMASSHELMET mass = 50;

//SPECIAL TYPES of MASSCLASS
#define BELTMASSVEST mass = 10;