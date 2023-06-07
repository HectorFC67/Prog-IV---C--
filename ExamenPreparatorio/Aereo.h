#include "Vehiculo.h"

#ifndef AEREO_H
#define AEREO_H

class Aereo :public Vehiculo
{
    private:
        float alturaMax;
        float alturaMin;
    public:
        Aereo();
        Aereo(int codigo, Posicion posicionActual, Posicion* ruta, int numeroPosicionesRuta, float alturaMax, float alturaMin);
        Aereo(const Aereo &a);
        ~Aereo();
        float getAlturaMax();
        void setAlturaMax(float alturaMax);
        float getAlturaMin();
        void setAlturaMin(float alturaMin);
};

#endif 