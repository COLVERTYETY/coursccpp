#include "Disk/disk.h"
#include "Game/game.h"
#include "Tower/tower.h"

int main(int argc, char** argv){
    int t1[]={4,3,2,1};
    Tower arrofTowers[3]={Tower("A",t1,4),Tower("B"),Tower("C")};
    Game thegame = Game(arrofTowers);
    std::cout<<thegame<<"start order"<<"\n";
    thegame.Solve(4,0,1,2);
    return 0;
}