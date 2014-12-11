rem set path to see gcc and make
set PATH=%PATH%;C:\MinGW\bin;C:\MinGW\msys\1.0\bin

gcc -o gps_start gps_start.c

rem pause means I get to see the compiler messages
pause