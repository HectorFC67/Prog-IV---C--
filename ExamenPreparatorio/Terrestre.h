#include "Vehiculo.h"

#ifndef TERRESTRE_H
#define TERRESTRE_H

class Terrestre :public Vehiculo
{
    private:
        Posicion posicionAnterior;
    public:
        Terrestre();
        Terrestre(int codigo, Posicion posicionActual, Posicion* ruta, int numeroPosicionesRuta, Posicion posicionAnterior);
        Terrestre(const Terrestre &a);
        ~Terrestre();
        Posicion getPosicionAnterior();
};

#endif 