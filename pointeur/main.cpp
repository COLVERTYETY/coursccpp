#include <stdio.h>
#include <iostream>

void printarray(float *array, int size){
    for(int i=0;i<size;i++){
        std::cout << *(array+i) << "\n";
    }
}

float computeaverage(float *array,int size){
    float sum=0;
    for(int i=0;i<size;i++){
        sum+=*(array+i);
    }
    return sum/(float)(size);
}

int searchvalue(float *array, int size, float val){
    int res = -1;
    for(int i=0;i<size;i++){
        if(*(array+i)==val){
            res = i;
            break;
        }
    }
    return res;
}

void computeMinMax(float *array, int size, float &min, float &max){
    float lmin= 9999999;
    float lmax= -9999999;
    for(int i=0;i<size;i++){
        if(*(array+i)>lmax){
            lmax = (*array+i);
        }
        if(*(array+i)<lmin){
            lmin = (*array+i);
        }
    }
    min = lmin;
    max = lmax;
}

void exercice2(){
    float *tableauDynamique;
    int size=0;
    std::cout << "please enter the size of the array \n"; 
    std::cin >> size;
    std::cout << "ty mate \n";
    tableauDynamique = (float *)malloc(sizeof(float)*size);
    float *start = tableauDynamique;
    for(int i=0;i<size;i++){
        *tableauDynamique = i;
        std::cout << "value "<< *tableauDynamique <<"\n";
        ++tableauDynamique; 
        std::cout << "pos "<< tableauDynamique <<"\n";
        std::cout << "----------------------------\n";
    }
    std::cout << "now lets check\n";
    printarray(start,size);
    std::cout<< "the average is: "<<computeaverage(start,size)<<"\n";
    std::cout<< "searching for 10: "<<searchvalue(start,size,10)<<"\n";
    std::cout<< "searching for 3.1415: "<<searchvalue(start,size,3.1415)<<"\n";
    float min,max;
    computeMinMax(start,size,min,max);
    std::cout<< "max is: "<<max<<" || min is: "<<min<<"\n";
    free(start);
}

int **createMatrix(int r,int c){
    int **array = (int **)malloc(sizeof(int*)*r); //allocate rows
    for(int i=0;i<r;i++){
        *(array+i) = (int*)malloc(sizeof(int)*c); //allocate colls
        //fill
        for(int j=0;j<c;j++){
            *(*(array+i)+j) = 10 + rand() % 90 ;
        }
    }
    return array;
}

void printMatrix(int **array, int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            std::cout << *(*(array+i)+j) <<" ";
        }
        std::cout << "\n";
    }
}

void freeMatrix(int **array, int r){
    for(int i=0;i<r;i++){
        free(*(array+i));
    }
    free(array);
}

void exercice3(){
    std::cout << "please enter R\n";
    int r;
    std::cin >> r;
    std::cout << "please enter C\n";
    int c;
    std::cin >> c;
    std::cout << "creating matrix\n";
    int **matrix = createMatrix(r,c);
    printMatrix(matrix,r,c);
    std::cout << "freeing memory\n";
    freeMatrix(matrix,r);
    std::cout <<"done\n";
}

int main(int, char**) {
    exercice3();
    return 0;
}
