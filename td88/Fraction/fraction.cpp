#include "fraction.h"

fraction::fraction(int num, int denum)
{
    numerator = num;
    denominator = denum;
}

fraction::~fraction()
{
}

const fraction fraction::operator*(fraction a){
    return fraction(numerator*a.numerator,denominator*a.denominator);
}
void fraction::operator*=(fraction a){
    numerator*=a.numerator;
    denominator*=a.denominator;
}

std::ostream& operator<<(std::ostream& out, const fraction& f){
    return out << f.numerator << "/" << f.denominator;
}

std::istream & operator>>(std::istream & in, fraction & f) {
    char c;
    if (!(in >> f.numerator >> c >> f.denominator) || (c != '/')) {
        in.setstate(std::ios::failbit);
    }
    return in;
}