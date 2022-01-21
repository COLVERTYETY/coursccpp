#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include <iostream>

int main(){
    Rectangle r(1,2,3,45,32);
    Circle c(4,5,4,13);
    std::cout << r<<"\n";
    std::cout << c<<"\n";
    return 0;
}