#include "Poligono.h"

#include <iostream>
using namespace std;

Poligono::Poligono(const char * nombre, int numVertices, Punto vertices[]): Figura(nombre)
{
	this->numVertices = numVertices;
	this->vertices = new Punto[numVertices];
	for (int i=0;i<numVertices;i++)
	{
		this->vertices[i] = vertices[i];
	}
}

Poligono::Poligono(const Poligono &p): Figura(p.getNombre())
{
	this->numVertices = p.numVertices;
	this->vertices = new Punto[p.numVertices];
	for (int i=0;i<p.numVertices;i++)
	{
		this->vertices[i] = p.vertices[i];
	}
}
Poligono::~Poligono()
{
	delete[] vertices;
}
void Poligono::imprimir()
{
	Figura::imprimir();
	for(int i=0; i<this->numVertices;i++)
	{
		cout << "Vertice " << i << " = ";
		this->vertices[i].imprimir();
	}
}
float Poligono::getPerimetro()
{
	float perimetro = 0;
	for(int i=0; i<this->numVertices;i++)
	{
		if (i == (this->numVertices-1))
		{
			perimetro = perimetro + this->vertices[i].distancia(this->vertices[0]);
		}else{
			perimetro = perimetro + this->vertices[i].distancia(this->vertices[i+1]);
		}
	}
	return perimetro;
}
int Poligono::getNumVertices() const
{
	return numVertices;
}
