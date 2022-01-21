#ifndef SHAPE
#define SHAPE

#include <ostream>

class Shape{
    protected:
        int x;
        int y;
        int color;
    public :
        Shape();
        Shape(int x, int y, int color);
        void changeColor(int c);
        friend std::ostream& operator<<(std::ostream & out, const Shape&s);
};

#endif
