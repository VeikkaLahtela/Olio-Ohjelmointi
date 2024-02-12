// asunto.h
#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
private:
    int asukasmaara;
    int neliomaara;

public:
    Asunto();
    void maarita(int asukasmaara, int neliomaara);
    double laskekulutus(double hinta);
};

#endif // ASUNTO_H
