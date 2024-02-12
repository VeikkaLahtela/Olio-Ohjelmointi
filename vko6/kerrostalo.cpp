// kerrostalo.cpp
#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo() {
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
}

Kerrostalo::~Kerrostalo() {
    delete eka;
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskekulutus(double hinta) {
    double kulutus = 0;
    kulutus += eka->laskekulutus(hinta);
    kulutus += toka->laskekulutus(hinta);
    kulutus += kolmas->laskekulutus(hinta);
    return kulutus;
}
