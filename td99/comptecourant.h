#ifndef COURANT
#define COURANT

class CompteCourant{
    private:
        const double minamount = 500;
    public:
        CompteCourant(int id, double solde);
};

#endif