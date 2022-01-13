#include "game.h"

// Game::Game(){
//     for(int i=0;i<NTOWERS;i++){
//         std::string s(1,(char)(i+97));
//         mytowers[i]=Tower(s);
//     }
//     for(int i=0;i<NTOWERS+1;i++){
//         mytowers[0].myDisks.push_back(Disk(i));
//     }
    
// }

Game::Game(Tower towers[]){
    for(int i=0;i<NTOWERS;i++){
        mytowers[i]=towers[i];
    }
}

Tower Game::getTower(int n)const{
    return mytowers[n];
}

void Game::Solve(int n,int from, int to, int aux){
    
    if(n!=0){
        Solve(n-1,from,aux,to);
        mytowers[to].pushDisk(mytowers[from].popDisk());
        std::cout << *this;
        std::cout <<"moved disk from "<< mytowers[from].getname() << " to " << mytowers[to].getname() <<"\n"<<"\n";
        Solve(n-1,aux,to,from);
    }
}

std::ostream& operator<<(std::ostream& out,const Game & g){
    for(int i=0;i<NTOWERS;i++){
        out << g.getTower(i)<<"\n";
    }
    return out;
}