// kerros.h
#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"

class Kerros {
private:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;

public:
    Kerros();
    ~Kerros(); 
    void maaritaasunnot();
    double laskekulutus(double hinta);
};

#endif // KERROS_H
