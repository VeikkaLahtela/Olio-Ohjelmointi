// main.cpp
#include <iostream>
#include "katutaso.h"
#include "kerros.h"
using namespace std;
int main() {

    Katutaso eka;

    Kerros toka;

    Kerros kolmas;


    cout << "maaritetaan katutaso" << endl;
    eka.maaritaasunnot();


    cout << "maaritetaan ensimmainen kerros" << endl;
    toka.maaritaasunnot();
    cout << "maaritetaan toinen kerros" << endl;
    kolmas.maaritaasunnot();

    cout << "kerrostalo luotu" << endl;
    double kulutus = eka.laskekulutus(1) + toka.laskekulutus(1) + kolmas.laskekulutus(1);
    cout << "Kerrostalon kulutus, kun hinta=1 on " << kulutus << endl;

    return 0;
}
