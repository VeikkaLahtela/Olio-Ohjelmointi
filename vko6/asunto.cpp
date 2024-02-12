// asunto.cpp
#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto() : asukasmaara(2), neliomaara(100) {
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int asukasmaara, int neliomaara) {
    cout << "Asunto maaritetty asukkaita= " << asukasmaara << " nelioita= " << neliomaara << endl;
}

double Asunto::laskekulutus(double hinta) {
    return hinta * (asukasmaara * neliomaara);
}
