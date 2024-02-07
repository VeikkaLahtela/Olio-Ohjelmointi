// kerrostalo.h
#pragma once
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo {
public:
    Kerrostalo();
    double laskekulutus(double hinta);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;

};
