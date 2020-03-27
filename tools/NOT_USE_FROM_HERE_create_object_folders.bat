@echo off
REM.-- Prepare the Command Processor --
SETLOCAL ENABLEEXTENSIONS
SETLOCAL ENABLEDELAYEDEXPANSION

For /F "tokens=2,3 delims= " %%G in (Submod_name_macros.hpp) DO SET %%G=%%H

SET /P ITEMTYPE=Please enter the Itemtype:
MD "Objects\%ITEMTYPE%_%MODSUFFIX%\ui"
Echo folder for Object created
Echo now starting subfolder creation
Pause
Echo Please enter all Variants (as abbrev.) for the item, use Enter after each Variant and when you are done: On a new line Press "CTRL" and "Z" then "ENTER" to finish the input
TYPE CON > temp_list.txt

For /F "tokens=1 delims= " %%G in (temp_list.txt) do MD "Objects\%ITEMTYPE%_%MODSUFFIX%\tex\%%G_%ITEMTYPE%_%MODSUFFIX%"

Echo Subfolders created

CHOICE /C YN /M "Do you want to create empty files for the standard files, so you have the file name already set"
IF %ERRORLEVEL% EQU 2 goto exit_proced
IF %ERRORLEVEL% EQU 1 goto sub_create_files



:exit_proced
DEL /Q temp_list.txt
Echo Generation is complete and program will exit now
pause
EXIT


:sub_create_files
Echo creating standard files as empties
pause
TYPE nul > "Objects\%ITEMTYPE%_%MODSUFFIX%\bdsm_AfA_Base_%ITEMTYPE%_%MODSUFFIX%.p3d"
TYPE nul > "Objects\%ITEMTYPE%_%MODSUFFIX%\tex\bdsm_AfA_Base_%ITEMTYPE%_%MODSUFFIX%.rvmat"
For /F "tokens=1 delims= " %%G in (temp_list.txt) do (
TYPE nul > "Objects\%ITEMTYPE%_%MODSUFFIX%\ui\bdsm_AfA_%%G_%ITEMTYPE%_%MODSUFFIX%_Icon_ca.paa"
TYPE nul > "Objects\%ITEMTYPE%_%MODSUFFIX%\tex\%%G_%ITEMTYPE%_%MODSUFFIX%\bdsm_AfA_%%G_%ITEMTYPE%_%MODSUFFIX%_co.paa"
TYPE nul > "Objects\%ITEMTYPE%_%MODSUFFIX%\tex\%%G_%ITEMTYPE%_%MODSUFFIX%\bdsm_AfA_%%G_%ITEMTYPE%_%MODSUFFIX%_as.paa"
TYPE nul > "Objects\%ITEMTYPE%_%MODSUFFIX%\tex\%%G_%ITEMTYPE%_%MODSUFFIX%\bdsm_AfA_%%G_%ITEMTYPE%_%MODSUFFIX%_nohq.paa"
TYPE nul > "Objects\%ITEMTYPE%_%MODSUFFIX%\tex\%%G_%ITEMTYPE%_%MODSUFFIX%\bdsm_AfA_%%G_%ITEMTYPE%_%MODSUFFIX%_smdi.paa"
)
goto exit_proced

