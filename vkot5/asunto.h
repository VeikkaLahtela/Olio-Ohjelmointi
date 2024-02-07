// asunto.h
#pragma once

class Asunto {
public:
    Asunto();
    void maarita(int asukasmaara, int neliomaara);
    double laskekulutus(double hinta);
private:
    int asukasmaara;
    int neliomaara;
};
