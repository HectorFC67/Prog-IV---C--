#include <iostream>

#include "ConHijos.h"
#include "Familia.h"
#include "Miembro.h"
using namespace std;

ConHijos::ConHijos()
{
	this->numHijos = 0;
	this->hijos = NULL;
}
ConHijos::ConHijos(Miembro* h, Miembro* m, int numHijos):Familia(h, m)
{
	this->numHijos = numHijos;
	this->hijos = new Miembro*[numHijos];
}
ConHijos::ConHijos(const ConHijos& ch):Familia(ch)
{
	this->numHijos = ch.numHijos;
	this->hijos = new Miembro*[ch.numHijos];

	int i = 0;
	while(i<ch.numHijos)
	{
		this->hijos[i] = ch.hijos[i];
		i++;
	}
}
ConHijos::~ConHijos()
{
	delete[] this->hijos;
}
void ConHijos::setNumHijos(int numHijos)
{
	this->numHijos = numHijos;
	this->hijos = new Miembro*[numHijos];
}
Miembro* ConHijos::getHijo(int orden) const
{
	if (orden <= this->numHijos)
	{
		return this->hijos[orden-1];
	}
	else
	{
		return NULL;
	}
}
void ConHijos::setHijo(Miembro* m, int orden)
{
	if (orden <= this->numHijos)
	{
		this->hijos[orden-1] = m;
	}
}
Miembro** ConHijos::getHijos() const
{
	return this->hijos;
}
int ConHijos::getNumHijos() const
{
	return this->numHijos;
}
void ConHijos::imprimir()
{
	Familia::imprimir();
	cout << endl;
	cout << "HIJOS:" << endl;
	cout << "-----" << endl;
	for (int j=0;j<this->numHijos;j++)
	{
		cout << "Hijo " << j+1 << ": " << this->hijos[j]->toStr() <<  endl;
	}
}
int ConHijos::contarMenoresEdad(int edad)
{
	int contador = Familia::contarMenoresEdad(edad);
	for (int i=0;i<this->numHijos;i++)
	{
		if (this->hijos[i]->getEdad() < edad) contador++;
	}
	return contador;
}
