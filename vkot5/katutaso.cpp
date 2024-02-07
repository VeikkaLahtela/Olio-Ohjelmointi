// katutaso.cpp
#include "katutaso.h"
#include <iostream>
using namespace std;
void Katutaso::maaritaasunnot() {

    as1.maarita(2, 100);

    as2.maarita(2, 100);
    cout << "Katutaso maaritetty" << endl;
}

double Katutaso::laskekulutus(double hinta) {
    return as1.laskekulutus(hinta) + as2.laskekulutus(hinta);
}
