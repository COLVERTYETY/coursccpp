g++ -Wall Disk/disk.h Disk/disk.cpp -c 
g++ -Wall Tower/tower.h Tower/tower.cpp -c 
g++ -Wall Game/game.h Game/game.cpp -c 
g++ -Wall -c main.cpp 
g++ -Wall -o build/out main.o disk.o tower.o game.o
./build/out