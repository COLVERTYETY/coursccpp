#ifndef DATE
#define DATE
#include <iostream>
#include <time.h>
class date
{
private:
    short jour;
    short mois;
    int annee;
public:
    date();
    date(short j, short m , int a);
    ~date();
    bool operator<(const date & autre) const;
    bool operator<=(const date & autre) const;
    bool operator>(const date & autre) const;
    bool operator>=(const date & autre) const;
    bool operator==(const date & autre) const;
    bool operator!=(const date & autre) const;
    friend std::ostream& operator<<(std::ostream& out, const date& f);
};




#endif