#!/usr/bin/env bash
BLACK='\033[0;30m'
RED='\033[0;31m'   
echo -e "${RED}"

cd "heptagon"
./simulate.sh -s main -p $1.ept -k 1

cd ..

dest_src=$pwd."/supervisor"
src=$pwd."/heptagon/$1_c"
cp "$src/$1_types.c" "$dest_src/$1_types.cpp"
cp "$src/$1_types.h" "$dest_src/$1_types.h"
cp "$src/$1.c" "$dest_src/$1.cpp"
cp "$src/$1.h" "$dest_src/$1.h"
sed -i 's/int/long/g' "$dest_src/$1.cpp"
sed -i 's/int/long/g' "$dest_src/$1.h"
sed -i 's/int/long/g' "$dest_src/$1_types.h"

# comments out the #include "pervasives.h" line
sed -i '/#include "pervasives.h"/ s/^/\/\//' ./supervisor/$1_types.h

echo -e "${BLACK}"

echo "************************* UPLOADING TO ARDUINO *************************"
if [[ $# <2 ]]; then
	echo enter sketch name and port no.
	exit
fi
arduino --upload supervisor/supervisor.ino --port /dev/ttyUSB$2
