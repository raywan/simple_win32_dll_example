@echo off
if "%1" == "" (SET LINK_TYPE=IMPLICIT)
if "%1" == "IMPLICIT" (SET LINK_TYPE=IMPLICIT)
if "%1" == "EXPLICIT" (SET LINK_TYPE=EXPLICIT)

if "%LINK_TYPE%" == "EXPLICIT" (
cl /DEXPLICIT_LINKING main.cpp /Fe:run_example.exe
)

if "%LINK_TYPE%" == "IMPLICIT" (
cl /DIMPLICIT_LINKING main.cpp  /Fe:run_example.exe /link module.lib
)
