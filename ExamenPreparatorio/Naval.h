#include "Vehiculo.h"

#ifndef NAVAL_H
#define NAVAL_H

class Naval :public Vehiculo
{
    private:
        float profundidad;
    public:
        Naval();
        Naval(int codigo, Posicion posicionActual, Posicion* ruta, int numeroPosicionesRuta, float profundidad);
        Naval(const Naval &a);
        ~Naval();
        float getProfundidad();
        void setProfundidad(float profundidad);
};

#endif 