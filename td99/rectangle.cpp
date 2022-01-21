#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int c, int h, int w): Shape(x,y,c), height{h}, width{w}{}

double Rectangle::getDiagonal(){
    return sqrt(width*width+height*height);
}

std::ostream& operator<<(std::ostream& out, const Rectangle&r){
    return out << static_cast<const Shape&>(r)<<" w,h=("<<r.width<<","<<r.height<<")";
}