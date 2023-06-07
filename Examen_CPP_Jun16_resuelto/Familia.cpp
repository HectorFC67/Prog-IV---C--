#include <iostream>
#include <string.h>

#include "Miembro.h"
#include "Familia.h"
using namespace std;

Familia::Familia()
{
	this->conyugeH = NULL;
	this->conyugeM = NULL;
}
Familia::Familia(Miembro* h, Miembro* m)
{
	this->conyugeH = h;
	this->conyugeM = m;
}
Familia::Familia(const Familia& f)
{
	this->conyugeH = f.conyugeH;
	this->conyugeM = f.conyugeM;
}
Familia::~Familia()
{
}
void Familia::setConyugeH(Miembro* h)
{
	this->conyugeH = h;
}
Miembro* Familia::getConyugeH() const
{
	return this->conyugeH;
}
void Familia::setConyugeM(Miembro* m)
{
	this->conyugeM = m;
}
Miembro* Familia::getConyugeM() const
{
	return this->conyugeM;
}
char* Familia::getNombre() const
{
	if ((this->conyugeH != NULL) & (this->conyugeM != NULL))
	{
		  char *apellidoH, *apellidoM;
		  apellidoH = strchr (this->conyugeH->getNombre(), ' ');
		  apellidoM = strchr (this->conyugeM->getNombre(), ' ');
		  if ((apellidoH != NULL) & (apellidoM != NULL))
		  {
			  char* nombre = new char[strlen(apellidoH+1) + 3 + strlen(apellidoM+1) + 1];
			  strcpy (nombre, apellidoH+1);
			  strcat (nombre, " - ");
			  strcat (nombre, apellidoM+1);
			  return nombre;
		  }
	}
	return NULL;
}
void Familia::imprimir()
{
	cout << "====" << endl;
	cout << "FAMILIA: " << this->getNombre() << endl;
	cout << "====" << endl;
	cout << "Marido: " << this->getConyugeH()->toStr() << endl;
	cout << "Mujer: " << this->getConyugeM()->toStr() << endl;

}
int Familia::contarMenoresEdad(int edad)
{
	int contador = 0;
	if	(this->conyugeH->getEdad() < edad) contador++;
	if	(this->conyugeM->getEdad() < edad) contador++;
	return contador;
}
