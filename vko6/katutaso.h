// katutaso.h
#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"

class Katutaso {
private:
    Asunto* as1;
    Asunto* as2;

public:
    Katutaso();
    ~Katutaso(); // Lisätty
    void maaritaasunnot();
    double laskekulutus(double hinta);
};

#endif // KATUTASO_H
