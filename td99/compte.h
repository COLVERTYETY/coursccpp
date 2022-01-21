#ifndef COMPTE
#define COMPTE
#include <ostream>

class Compte{
    protected:
        int id;
        double solde;
    public:
        Compte(int id, double s);
        void ajouter(double p);
        void retirer(double r);
        friend std::ostream& operator<<(std::ostream& out, const Compte& c);
};

#endif