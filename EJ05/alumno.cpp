#include "alumno.h"
#include <iostream>
#include <string.h>
using namespace std;

Alumno::Alumno(const char *nombre)
{
    this->id = ++counter;
    this->nombre = new char[strlen(nombre)+1];
    for(int i = 0; i< strlen(nombre); i++)
    {
        this->nombre[i] = nombre[i];
    }
    //strcpy(this->nombre, nombre);
    cout<<"Hemos creado un alumno"<<endl;
}

Alumno::Alumno(const Alumno &a)
{
	cout << "Construyendo alumno mediante copia" << endl;
	this->id = a.id;
	this->nombre = new char[strlen(a.nombre) + 1];
	strcpy(this->nombre, a.nombre);
}

Alumno::~Alumno()
{
    delete [] this->nombre;
    cout << "Hemos eliminado un alumno"<< endl;

}

int Alumno::getID()
{
    return this->id;
}

char * Alumno::getNombre()
{
    return this->nombre;

}
int Alumno::counter = 0;

void Alumno::operator=(const Alumno &a)
{
	this->id = a.id;
	this->nombre = new char[strlen(a.nombre) + 1];
	strcpy(this->nombre, a.nombre);
    cout<<"Hemos metido a los datos de otro alumno con operador asignar"<<endl;
}