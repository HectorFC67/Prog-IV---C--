#include "profesor.h"
#include "asignatura.h"
#include <iostream>

using namespace std;

Profesor::Profesor() : Persona() 
{
    this->asignatura.setNombre(nullptr);
    this->asignatura.setCreditos(0);
}

Profesor::Profesor(const char* dni, const char* nombre, int edad, Asignatura asignatura)
 : Persona(dni, nombre, edad)
{
    this->asignatura.setNombre(asignatura.getNombre());
    this->asignatura.setCreditos(asignatura.getCreditos());
}

Profesor::Profesor(const Profesor& other) : Persona(other)
{
    this->asignatura = other.asignatura;
}

Profesor::~Profesor()
{

}

Asignatura Profesor::getAsignatura()
{
    return asignatura;
}

void Profesor::setAsignatura(Asignatura asignatura) 
{
    this->asignatura.setNombre(asignatura.getNombre());
    this->asignatura.setCreditos(asignatura.getCreditos());
}

void Profesor::imprimirInfo()
{
    Persona::imprimirInfo();
    cout << "Asignatura impartida: ";
    asignatura.imprimirInfo();
}
