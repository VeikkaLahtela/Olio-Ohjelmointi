

// main.cpp
#include <iostream>
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"
using namespace std;


int main() {
    Kerrostalo* kerrostalo = new Kerrostalo();

    Katutaso* eka = new Katutaso();
    Kerros* toka = new Kerros();
    Kerros* kolmas = new Kerros();

    eka->maaritaasunnot();
    toka->maaritaasunnot();
    kolmas->maaritaasunnot();

    cout << "kerrostalo luotu" << endl;
    double kulutus = eka->laskekulutus(1) + toka->laskekulutus(1) + kolmas->laskekulutus(1);
    cout << "Kerrostalon kulutus, kun hinta=1 on " << kulutus << endl;

    
    delete eka;
    delete toka;
    delete kolmas;
    delete kerrostalo;

    return 0;
}
