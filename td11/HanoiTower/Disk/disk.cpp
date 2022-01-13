#include "disk.h"

Disk::Disk(const int d){
    diameter = d;
}
Disk::Disk(const Disk& D){
    diameter = D.getd();
}

int Disk::getd()const{
    return diameter;
}

std::ostream& operator<<(std::ostream& out, const Disk & d){
    return out <<d.diameter;
}