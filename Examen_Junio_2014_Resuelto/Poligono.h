#ifndef POLIGONO_H_
#define POLIGONO_H_

#include "Punto.h"
#include "Figura.h"

class Poligono: public Figura
{
	int numVertices;
	Punto *vertices;

public:
	Poligono(const char * nombre, int numVertices, Punto vertices[]);
	Poligono(const Poligono &p);
	virtual ~Poligono();

	int getNumVertices() const;

	virtual void imprimir();
	virtual float getPerimetro();
};

#endif /* POLIGONO_H_ */
