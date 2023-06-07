#include "Posicion.h"

#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo
{
    private:
        char* codigo;
        Posicion posicionActual;
        Posicion* ruta;
        int numeroPosicionesRuta;
    public:
        Vehiculo(const char* codigo, const Posicion posicionActual, Posicion* ruta, int numeroPosicionesRuta);
        virtual ~Vehiculo();
        virtual void actualizarPosicion(Posicion posicionActual);
        const char* getCodigo() const;
        virtual void actualizarPosicion(Posicion &nuevaPosicion);
        virtual void comprobarRuta();
        virtual void activarAlarma();
        bool estaEnRuta();    
};

#endif 