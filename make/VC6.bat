call "C:\VC6\Microsoft Visual Studio\VC98\Bin\VCVARS32.BAT"

cl /O2 /GX /MT -Femain.exe  ^
/I..\include ^
..\source\*.cpp  ^
..\source\Windows\*.cpp  ^
..\main.cpp

del *.obj

pause
