#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef POSICION_H
#define POSICION_H

class Posicion
{
  private:
	float longitud;
	float latitud;
  public:
	Posicion();
	Posicion(float longitud, float latitud);
    Posicion(const Posicion &p);
    ~Posicion();
    float Distancia(const Posicion &p);
    float getLongitud();
    void setLongitud(float longitud);
    float getLatitud();
    void setLatitud(float latitud);
};

#endif