#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "Miembro.h"
using namespace std;

Miembro::Miembro()
{
	this->edad = 0;
	this->nombre = new char[1];
	this->nombre[0] = '\0';
}
Miembro::Miembro(const char* nombre, int edad)
{
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
	this->edad = edad;
}
Miembro::Miembro(const Miembro& p)
{
	this->nombre = new char[strlen(p.nombre) + 1];
	strcpy(this->nombre, p.nombre);
	this->edad = p.edad;

}
Miembro::~Miembro()
{
	delete[] this->nombre;
}
char* Miembro::getNombre() const
{
	return this->nombre;
}
int Miembro::getEdad() const
{
	return this->edad;
}
void Miembro::setNombre(const char* nombre)
{
	delete[] this->nombre;
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
}
void Miembro::setEdad(int edad)
{
	this->edad = edad;
}
char* Miembro::toStr() const
{
	char* str = new char[100];
	char edad[5];
	itoa (this->edad, edad, 10);
	strcpy(str, this->nombre);
	strcat(str, " (");
	strcat(str, edad);
	strcat(str, " años)");
	return str;
}
