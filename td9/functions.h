#include <iostream>
#include <stdlib.h>
#include <time.h>

#ifndef INCLUDED
#define INCLUDED
int& valAt(int tab[], int i);
void printArray(int tab[], int size);
void Devinette();
// template<typename T> T sum(T array[], int size);
template<typename T, typename R> R sum(T array[], int size);
template<> int sum<std::string>(std::string array[], int size);
void concatUser();
#endif