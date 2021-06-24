@echo off
call "C:\apps\MVS12\VC\VCVARSALL.BAT " amd64

cd .
nmake -f OL_HiLData.mk  ISPROTECTINGMODEL=NOTPROTECTING
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
