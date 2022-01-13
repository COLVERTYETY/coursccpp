#ifndef GAME_H
#define GAME_H
#include "../Tower/tower.h"
#include <iostream>
#include <vector>
#define NTOWERS 3

class Game{
    private :
        Tower mytowers[NTOWERS];
    public :
        Tower getTower(int n)const;
        void Solve(int n,int from, int to, int aux);
        Game(int seed);
        Game(Tower towers[]);
        friend std::ostream& operator<<(std::ostream& out,const Game & g);
};

#endif