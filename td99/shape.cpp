#include "shape.h"

Shape::Shape(){}
Shape::Shape(int x, int y, int color):x{x}, y{y}, color{color}{}

void Shape::changeColor(int c){
    color=c;
}

std::ostream& operator<<(std::ostream & out, const Shape&s){
    return out << "x,y=("<<s.x<<","<<s.y<<")";
}