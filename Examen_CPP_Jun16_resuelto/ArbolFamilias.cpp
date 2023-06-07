#include <iostream>

#include "Miembro.h"
#include "Familia.h"
#include "ArbolFamilias.h"
using namespace std;

ArbolFamilias::ArbolFamilias()
{
	this->numFamilias=0;
}
ArbolFamilias::ArbolFamilias(const ArbolFamilias& af)
{
	this->numFamilias=af.numFamilias;
	for (int i=0;i<af.numFamilias;i++)
	{
		this->familias[i] = af.familias[i];
	}
}
ArbolFamilias::~ArbolFamilias()
{
}
void ArbolFamilias::anadirFamilia(Familia* f)
{
	this->familias[this->numFamilias] = f;
	this->numFamilias++;
}
void ArbolFamilias::imprimir() const
{
	for (int i=0;i<this->numFamilias;i++)
	{
		this->familias[i]->imprimir();
		cout << endl;
	}
}
int ArbolFamilias::contarMenoresEdad(int edad) const
{
	int c = 0;
	for (int i=0;i<this->numFamilias;i++)
	{
		c = c + this->familias[i]->contarMenoresEdad(edad);
	}
	return c;
}
Miembro** ArbolFamilias::getConyugesInicial(int& numConyuges, char letra) const
{
	numConyuges = 0;
	for (int i=0;i<this->numFamilias;i++)
	{
		if ((this->familias[i]->getConyugeH()->getNombre()[0])==letra) numConyuges++;
		if ((this->familias[i]->getConyugeM()->getNombre()[0])==letra) numConyuges++;
	}
	Miembro** conyuges = new Miembro*[numConyuges];
	int c = 0;
	for (int i=0;i<this->numFamilias;i++)
	{
		Miembro* h = this->familias[i]->getConyugeH();
		Miembro* m = this->familias[i]->getConyugeM();
		if ((h->getNombre()[0])==letra)
		{
			conyuges[c] = h;
			c++;
		}
		if ((m->getNombre()[0])==letra)
		{
			conyuges[c] = m;
			c++;
		}
	}
	return conyuges;
}
