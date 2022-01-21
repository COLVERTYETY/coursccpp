#include "circle.h"

Circle::Circle(int x, int y, int c, int r):Shape(x,y,c), radius{r}{}

int Circle::getDiameter(){
    return radius*2;
}

std::ostream& operator<<(std::ostream& out, const Circle&c){
    return out << static_cast<const Shape&>(c)<<" r="<<c.radius;
}