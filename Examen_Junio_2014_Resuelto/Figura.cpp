#include "Figura.h"

#include <iostream>
using namespace std;

int Figura::numFiguras = 0;

Figura::Figura(const char *nombre)
{
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
	numFiguras++;
}

Figura::Figura(const Figura& f)
{
	this->nombre = new char[strlen(f.nombre) + 1];
	strcpy(this->nombre, f.nombre);
	numFiguras++;
}

Figura::~Figura()
{
	numFiguras--;
	delete[] nombre;
}

char* Figura::getNombre() const
{
	return this->nombre;
}

void Figura::imprimir()
{
	cout << "NOMBRE: " << this->nombre << endl;
}

int Figura::getNumFiguras()
{
	return numFiguras;
}
