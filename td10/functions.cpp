#include "functions.h"


bool hangman(){
    int coups=0;
    int coupsmax=10;
    std::string words[] = {"avion","voiture","robot", "jazz"};
    std::string theword = words[rand()%3];
    std::string guess = "";
    char turnguess;
    for(int i=0;i<theword.length();i++){guess+="_";}
    std::cout << "try and guess the word !!\n";
    do{
        std::cout << guess << "\n";
        std::cin >> turnguess;
        std::cout << coupsmax-coups << " guesses remaining.\n";
        coups++;
        for(int i=0;i<theword.length();i++){
            if(theword[i]==turnguess){
                guess[i]=turnguess;
            }
        }
    }while(guess!=theword && coups<=coupsmax);
    if(coups<=coupsmax){
        std::cout << "CONGRATS YOU WON !!\n";
        return 1;
    }
    std::cout << "YOU LOSE !!\n"<<" the word was: "<< theword<<"\n";
    return 1;
}
