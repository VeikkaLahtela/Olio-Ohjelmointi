// kerrostalo.cpp
#include "kerrostalo.h"
#include <iostream>
using namespace std;
//Kerrostalo::Kerrostalo() {}

double Kerrostalo::laskekulutus(double hinta) {
    double kulutus = 0;

    kulutus += eka.laskekulutus(hinta);
    kulutus += toka.laskekulutus(hinta);
    kulutus += kolmas.laskekulutus(hinta);
    return kulutus;
}
