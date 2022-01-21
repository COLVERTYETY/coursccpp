#include "compte.h"

Compte::Compte(int id, double s):id{id},solde{s}{}

void Compte::ajouter(double p){
    solde+=p;
}

void Compte::retirer(double r){
    solde-=r;
}

std::ostream& operator<<(std::ostream& out, const Compte& c){
    return out << "id: "<< c.id<<" solde: "<<c.solde;
}