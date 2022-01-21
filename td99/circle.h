#ifndef CIRCLE
#define CIRCLE
#include "shape.h"
#include <ostream>
class Circle: public Shape{
    private:
        int radius;
    public:
        Circle(int x, int y, int c, int r);
        int getDiameter();
        friend std::ostream& operator<<(std::ostream& out, const Circle&c);
};

#endif