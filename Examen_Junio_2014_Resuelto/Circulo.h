#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "Punto.h"
#include "Figura.h"

class Circulo: public Figura
{
	float radio;
	Punto centro;

public:
	Circulo(const char * nombre, Punto p, float radio);
	Circulo(const Circulo &c);
	virtual ~Circulo();

	Punto getCentro() const;
	float getRadio() const;

	virtual void imprimir();
	virtual float getPerimetro();
};

#endif /* CIRCULO_H_ */
