#include "Posicion.h"

#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo
{
    private:
        int codigo;
        Posicion posicionActual;
        Posicion* ruta;
        int numeroPosicionesRuta;
    public:
        Vehiculo();
        Vehiculo(int codigo, Posicion posicionActual, Posicion* ruta, int numeroPosicionesRuta);
        Vehiculo(const Vehiculo &v);
        virtual ~Vehiculo();
        virtual void actualizarPosicion(Posicion posicionActual);
        int getCodigo();
        void setCodigo(int codigo);
        Posicion getPosicionActual();
        void setPosicionActual(Posicion posicionActual);
        Posicion* getRuta();
        void setRuta(Posicion* ruta, int numeroPosicionesRuta);
        int getNumeroPosicionesRuta();
        void setNumeroPosicionesRuta(int numeroPosicionesRuta);       
};

#endif 