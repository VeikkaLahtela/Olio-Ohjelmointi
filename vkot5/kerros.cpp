// kerros.cpp
#include "kerros.h"
#include <iostream>
using namespace std;
void Kerros::maaritaasunnot() {

    as1.maarita(2, 100);

    as2.maarita(2, 100);

    as3.maarita(2, 100);

    as4.maarita(2, 100);
    cout << "kerros maaritetty" << endl;
}


double Kerros::laskekulutus(double hinta) {
    return as1.laskekulutus(hinta) + as2.laskekulutus(hinta) + as3.laskekulutus(hinta) + as4.laskekulutus(hinta);
}
