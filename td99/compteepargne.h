#ifndef EPARGNE
#define EPARGNE
#include "compte.h"

class CompteEpargne:public Compte
{
private:
    double taux;
    const double minamount = 500;
public:
    CompteEpargne(int id, double solde, double taux);
    double calcinteret();
    ~CompteEpargne();
};


#endif