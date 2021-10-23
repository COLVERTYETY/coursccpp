#include "../include/headers.h"
#include <time.h>
#define ARRAY_SIZE 100000

int globalArray[ARRAY_SIZE]; 

void readFile() { 
    int number, i;  
    FILE* inFile = fopen("array100000.txt", "r");            
    if (!inFile) {   
        printf("oops, file can't be read\n");  
        int i;
        std::cin >> i;
        return;  
    }  
    i = 0; 
    while (fscanf(inFile, "%d", &number ) == 1) {  
        globalArray[i++] = number;  
    }  
    fclose(inFile);  
}

int main(int, char**) {
    println("starting")
    int myarray[10] = {1,15,7,8,10,11,7,8,9,10};
    readFile();
    clock_t begin = clock();
    int thearray[ARRAY_SIZE];
    // mergeSort(globalArray, thearray, ARRAY_SIZE);
    quickSort(myarray,0,10);
    clock_t end = clock();
    for(int i=0;i<ARRAY_SIZE;i++){
        print(globalArray[i]);
        print(" ");
    }
    println(" ");
    println((double)(end-begin)/CLOCKS_PER_SEC);
}
