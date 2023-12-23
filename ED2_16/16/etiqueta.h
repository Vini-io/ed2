#ifndef ETIQUETA_H
#define ETIQUETA_H

#include <QString>

class Etiqueta{
public:
    int CA, VP, QAV;
    QString SV;
    Etiqueta() : CA(0), VP(-1), QAV(0), SV("F"){}
};

#endif // ETIQUETA_H
