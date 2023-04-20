#include "punto.h"
#ifndef RUTA_H_
#define RUTA_H_

class Ruta
{
    private:
        int id;
        Punto* inicial;
        Punto* final;
    public:
        Ruta();
        Ruta(int id);
        Ruta(int id, Punto inicial, Punto final);
        ~Ruta();
        int getId();
        void setId(int id);
        Punto* getInicial();
        void setInicial(Punto inicial);
        Punto* setFinal();
        void getFinal(Punto final);
        void anyadirPunto(Punto p);
};

#endif