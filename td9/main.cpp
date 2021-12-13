#include "functions.h"
#include "functions.cpp"

const int size=10;


int main(){
    // Devinette();
    // int a[] = {1, 2, 3};
    // double b[] = {2.1, 2.2};
    // std::cout << sum<int,int>(a, 3) << std::endl;
    // std::cout << sum<doule,double>(b, 2) << std::endl;
    srand(time(NULL));
    int mynumbers[size];
    for(int i=0;i<size;i++){
        int* myval = valAt(mynumbers,i);
        *myval = rand()%100;
    }  
    printArray(mynumbers, size);
    std::string words[] = {"mot","phrase","triangle"};
    std::cout <<sum<std::string, int>(words,3) << "\n";
    concatUser();
}