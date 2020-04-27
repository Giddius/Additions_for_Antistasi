/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 #define DISPLAYNAMELINE(variant1,extra1) displayName = QUOTE(variant1 extra1) ;


#define AUTHOR author = "Giddi";


#define SCOPE_BASE \
scope = 0; \
scopeArsenal = 0; \
scopeCurator = 0; \
weaponPoolAvailable = 0;


#define SCOPE_NORM \
scope = 2; \
scopeArsenal = 2; \
scopeCurator = 2; \
weaponPoolAvailable = 1;


#define MODELLINE(variant1) model = QUOTE(MODELDIR(variant1)) ;


#define HIDDENSELECT_LINE(variant1) \
hiddenSelections[] = {"Camo"} ; \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1))} ;

#define HIDDENSELECT_CAMO_INSIGNIA_LINE(variant1) \
hiddenSelections[] = {"Camo","Insignia"} ; \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1)),QUOTE(INSIGNIADIR(variant1))} ;

#define HIDDENSELECT_LINEFREE(caselect,mdlfolder,vrfolder,texname) \
hiddenSelections[] = {QUOTE(caselect)}; \
hiddenSelectionsTextures[] = {QUOTE(TEXDIRFREE(mdlfolder,vrfolder,texname))};


#define HIDDENSELECT_LINE_ONLYTEX(variant1) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1))};

#define HIDDENSELECTCAMO_INSIGNIA_LINE_ONLYTEX(variant1) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIR(variant1)),QUOTE(INSIGNIADIR(variant1))};

#define HIDDENSELECT_LINE_ONLYTEXFREE(mdlfolder,vrfolder,texname) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIRFREE(mdlfolder,vrfolder,texname))};

#define HIDDENSELECT_INSIGNIA_LINE_ONLYTEXFREE(mdlfolder,vrfolder,texname,variant1) \
hiddenSelectionsTextures[] = {QUOTE(TEXDIRFREE(mdlfolder,vrfolder,texname)),QUOTE(INSIGNIADIR(variant1))};

#define UILINE(variant1) picture = QUOTE(UIDIR(variant1));

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//


#define LOGOLINE(variant1) icon = QUOTE(LOGODIR(variant1));


#define FLAGLINE(variant1) flag = QUOTE(FLAGDIR(variant1));


#define INSIGNIALINE(variant1) texture = QUOTE(INSIGNIADIR(variant1));

//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-//


#define SUPPLYCLASSVALUE(capacity) Supply##capacity
#define SUPPLYCLASSLINE(capacity) containerClass = QUOTE(SUPPLYCLASSVALUE(capacity));



#define MASSLINE(var1) mass = var1 ;



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
