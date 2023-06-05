#include "Persona.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

Persona::Persona()
{
    this->nombre = nullptr;
    this->edad = 0;
}
Persona::Persona(char* nombre, int edad)
{
    this->nombre = new char[strlen(nombre)+1];
    for(int i=0; i<strlen(nombre); i++)
        this->nombre[i] = nombre[i];
    this->edad = edad;
}
Persona::Persona(const Persona &p)
{
   this->nombre = new char[strlen(p.nombre)+1];
    for(int i=0; i<strlen(p.nombre); i++)
        this->nombre[i] = p.nombre[i];
    this->edad = p.edad; 
}
Persona::~Persona()
{
    delete[] this->nombre;
}
char* Persona::getNombre()
{
    return this->nombre;
}
void Persona::setNombre(char* nombre)
{
    this->nombre = new char[strlen(nombre)+1];
    for(int i=0; i<strlen(nombre); i++)
        this->nombre[i] = nombre[i];
}
int Persona::getEdad()
{
    return edad;
}
void Persona::setEdad(int edad)
{
    this->edad = edad;
}