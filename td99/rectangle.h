#ifndef RECTANGLE
#define RECTANGLE

#include "shape.h"
#include <math.h>

class Rectangle: public Shape{
    private:
        int height;
        int width;
    public:
        Rectangle(int x, int y, int c, int h, int w);
        double getDiagonal();
        friend std::ostream& operator<<(std::ostream& out, const Rectangle&r);
};
#endif