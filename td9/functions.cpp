#include "functions.h"


void Devinette(){
    int coup=0;
    int target = rand()%100+1;  
    int guess;
    do{
        std::cout << "guess a number between 1 and 100\n";
        std::cin >> guess;
        coup++;
        std::cout << "attempt number _"<<coup<<"_\n";
        if(guess>target){
            std::cout << "TOO BIG !\n";
        }
        if(guess<target){
            std::cout << "too small !\n";
        }
    }while(guess!=target);
    std::cout<<"you found the number !!\n";
}

// template<typename T> T sum(T array[], int size){
//     T sum=0;
//     for(int i=0;i<size;i++){
//         sum+=array[i];
//     }
//     return sum;
// }

template<typename T, typename R> R sum(T array[], int size){
    R sum=0;
    for(int i=0;i<size;i++){
        sum+=(R)array[i];
    }
    return sum;
}

template<> int  sum<std::string>(std::string array[], int size){
    int length=0;
    for(int i=0;i<size;i++){
        length+=array[i].length();
    }
    return length;
}

int* valAt(int tab[], int i){
    return &(*(tab+i));
}
void printArray(int tab[], int size){
    for(int i=0;i<size;i++){
        std::cout << *valAt(tab, i) << " ";
    }
    std::cout << "\n";
}

void concatUser(){
    std::string s1,s2,s3;
    std::cout<< "please enter value of s1\n";
    std::cin >> s1;
    std::cout<< "please enter value of s2\n";
    std::cin >> s2;
    s3 = s1+s2;
    std::cout << s3<<"\n";
}
