
#ifndef FRACTION
#define FRACTION
#include <iostream>
#include <ostream>
class fraction
{
private:
    int numerator;
    int denominator;
public:
    fraction(int num, int denum);
    ~fraction();
    const fraction operator *(const fraction a);
    void operator *=(const fraction a);
    friend std::ostream& operator<<(std::ostream& out, const fraction& f);
    friend std::istream & operator>>(std::istream & in, fraction & f);
};

#endif