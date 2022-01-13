#include "pair.h"

Pair::Pair(int a, int b){
    pa = new int;
    *pa = a;
    pb = new int;
    *pb = b;
}

Pair::Pair(const Pair & other){
    pa = new int;
    *pa = *other.pa;
    pb = new int;
    *pb = *other.pb;
}

Pair::~Pair(){
    delete pa;
    delete pb;
}

std::ostream& operator<<(std::ostream& out, const Pair & p){
    return out <<"("<< *p.pa << "," << *p.pb << ")";
}