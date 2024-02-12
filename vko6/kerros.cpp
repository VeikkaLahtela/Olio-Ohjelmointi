// kerros.cpp
#include "kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros() {
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
}

Kerros::~Kerros() {
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

void Kerros::maaritaasunnot() {
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
    cout << "kerros maaritetty" << endl;
}

double Kerros::laskekulutus(double hinta) {
    return as1->laskekulutus(hinta) + as2->laskekulutus(hinta) + as3->laskekulutus(hinta) + as4->laskekulutus(hinta);
}
