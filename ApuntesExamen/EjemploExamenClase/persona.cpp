#include "persona.h"
#include <iostream>
#include <cstring>

using namespace std;

Persona::Persona()
{
    this->dni = nullptr;
    this->nombre = nullptr;
    this->edad = 0;
}

Persona::Persona(const char* dni, const char* nombre, int edad)
{
    this->dni = new char[strlen(dni) + 1];
    strcpy(this->dni, dni);
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
    this->edad = edad;
}

Persona::Persona(const Persona& other)
{
    this->dni = new char[strlen(other.dni) + 1];
    strcpy(this->dni, other.dni);
    this->nombre = new char[strlen(other.nombre) + 1];
    strcpy(this->nombre, other.nombre);
    this->edad = other.edad;
}

Persona::~Persona() 
{
    delete[] dni;
    delete[] nombre;
}

char* Persona::getDni() const 
{
    return dni;
}

char* Persona::getNombre() const 
{
    return nombre;
}

int Persona::getEdad() const 
{
    return edad;
}

void Persona::setDni(const char* dni) 
{
    delete[] this->dni;
    this->dni = new char[strlen(dni) + 1];
    strcpy(this->dni, dni);
}

void Persona::setNombre(const char* nombre) 
{
    delete[] this->nombre;
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
}

void Persona::setEdad(int edad) 
{
    this->edad = edad;
}

void Persona::imprimirInfo() const 
{
    cout << "DNI: " << dni << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
