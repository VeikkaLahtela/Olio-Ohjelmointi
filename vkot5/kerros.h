// kerros.h
#pragma once
#include "asunto.h"

class Kerros {
public:
    virtual void maaritaasunnot();
    double laskekulutus(double hinta);
private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
};
