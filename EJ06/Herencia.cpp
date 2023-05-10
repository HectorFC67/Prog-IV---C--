#include "Herencia.h"
#include <iostream>
#include <string.h>

using namespace std;

Persona::Persona(int edad, char* nombre)
{
    this->edad = edad;
    this->nombre = new char(strlen(nombre)+1);
    strcpy(this->nombre, nombre);
    cout << "Constructor Persona creado" << endl;
}

Persona::Persona(const Persona &p)
{
    this->edad = p.edad;
    this->nombre = new char(strlen(p.nombre)+1);
    strcpy(this->nombre, p.nombre);
    cout << "Constructor copia de Persona creado" << endl;
}

Persona::~Persona()
{
    delete[] this->nombre;
    cout << "Destructor Persona";
}

int Persona::getEdad()
{
    return this->edad;
}

char* Persona::getNombre()
{
    return this->nombre;
}

Alumno::Alumno(int edad, char* nombre, int numAsignaturas, float* notas):Persona(edad, nombre)
{ 
    this->numAsignaturas = numAsignaturas;
    this->notas = new float[this->numAsignaturas];
    for(int i=0;i<this->numAsignaturas; i++)
    {
        this->notas[i] = notas[i];
    }
    cout << "Constructor Alumno creado" << endl;
}

Alumno::Alumno(const Alumno &a):Persona(this->edad, this->nombre)
{
    this->edad = a.edad;
    this->nombre = new char(strlen(a.nombre)+1);
    strcpy(this->nombre, a.nombre);
    this->numAsignaturas = a.numAsignaturas;
    this->notas = new float[this->numAsignaturas];
        for(int i=0;i<numAsignaturas; i++)
    {
        this->notas[i] = a.notas[i];
    }
    cout << "Constructor copia de Alumno creado" << endl;
}

Alumno::~Alumno()
{
    delete[] this->notas;
    cout << "Destructor Alumno" << endl;
}

int Alumno::getNumAsignaturas()
{
    return this->numAsignaturas;
}

float* Alumno::getNotas()
{
    return this->notas;
}

void Alumno::setNotas(float* notas)
{
    this->notas = notas;
}

void Persona::diHola()
{
    cout<<"Hola soy una persona"<<endl;
}

void Alumno::diHola()
{
    cout<<"Hola soy un alumno"<<endl;
}