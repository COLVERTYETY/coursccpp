#include "date.h"

date::date()
{
    jour = 1+rand()%31;
    mois = 1+rand()%12;
    annee = 1+rand()%2012;
}

date::date(short j, short m, int a)
{
    jour = j;
    mois = m;
    annee = a;
}

date::~date()
{
}

bool date::operator<(const date & autre) const{
    return (annee!=autre.annee)?annee<autre.annee:(mois!=autre.mois)?mois<autre.mois:(jour!=autre.jour)?jour<autre.jour:false;
}
bool date::operator>(const date & autre) const{
    return (annee!=autre.annee)?annee>autre.annee:(mois!=autre.mois)?mois>autre.mois:(jour!=autre.jour)?jour>autre.jour:false;
}
bool date::operator<=(const date & autre) const{
    return (annee!=autre.annee)?annee<autre.annee:(mois!=autre.mois)?mois<autre.mois:(jour!=autre.jour)?jour<autre.jour:true;
}
bool date::operator>=(const date & autre) const{
    return (annee!=autre.annee)?annee>autre.annee:(mois!=autre.mois)?mois>autre.mois:(jour!=autre.jour)?jour>autre.jour:true;
}
bool date::operator==(const date & autre) const{
    return annee==autre.annee && jour == autre.jour && mois == autre.mois;
}
bool date::operator!=(const date & autre) const{
    return !(*this==autre);
}
std::ostream& operator<<(std::ostream& out, const date& d){
    return out << d.jour<<"/"<< d.mois<<"/"<< d.annee;
}