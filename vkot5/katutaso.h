// katutaso.h
#pragma once
#include "asunto.h"
#include "kerros.h"

class Katutaso : public Kerros {
public:
    void maaritaasunnot() override;
    double laskekulutus(double hinta);
private:
    Asunto as1;
    Asunto as2;
};
