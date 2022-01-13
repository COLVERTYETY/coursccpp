#include "Fraction/fraction.h"
#include "Date/date.h"
#define NTESTSDATE 20

int main(){
    // fraction f = fraction(3,4);
    // std::cout << f;
    // std::cin >> f;
    // std::cout << f;
    srand(time(NULL));
    date allthedates[NTESTSDATE];
    date work;
    date comp;
    for(int i=0;i<NTESTSDATE;i++){
        work = allthedates[i];
        for(int j=0;j<NTESTSDATE;j++){
            comp=allthedates[j];
            std::cout << work <<" < "<< comp <<" ? "<< ((work<comp)?"true":"false") <<"\n";
            std::cout << work <<" <= "<< comp <<" ? "<< ((work<=comp)?"true":"false") <<"\n";
            std::cout << work <<" > "<< comp <<" ? "<< ((work>comp)?"true":"false") <<"\n";
            std::cout << work <<" >= "<< comp <<" ? "<< ((work>=comp)?"true":"false") <<"\n";
            std::cout << work <<" == "<< comp <<" ? "<< ((work==comp)?"true":"false") <<"\n";
            std::cout << work <<" != "<< comp <<" ? "<< ((work!=comp)?"true":"false") <<"\n";
        }
    }
    return 0;
}