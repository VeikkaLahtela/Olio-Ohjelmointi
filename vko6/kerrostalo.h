// kerrostalo.h
#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;

public:
    Kerrostalo();
    ~Kerrostalo(); // Lisätty
    double laskekulutus(double hinta);
};

#endif // KERROSTALO_H
