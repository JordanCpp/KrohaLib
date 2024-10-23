call "C:\MSDEV\bin\VCVARS32.BAT"

cl /O2 /GX /MT -Femain.exe  ^
/I..\include ^
..\source\*.cpp  ^
..\source\Windows\*.cpp  ^
..\main.cpp

del *.obj

pause
