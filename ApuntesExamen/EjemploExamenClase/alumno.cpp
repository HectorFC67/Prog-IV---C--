#include "alumno.h"
#include <iostream>

using namespace std;

Alumno::Alumno() : Persona()
{
    this->asignaturas = nullptr;
    this->numAsignaturas = 0;
}

Alumno::Alumno(const char* dni, const char* nombre, int edad, Asignatura* asignaturas, int numAsignaturas) : Persona(dni, nombre, edad) 
{
    this->numAsignaturas = numAsignaturas;
    this->asignaturas = new Asignatura[numAsignaturas + 1];
    for (int i = 0; i < numAsignaturas; i++) {
        this->asignaturas[i] = asignaturas[i];
    }
}


Alumno::Alumno(const Alumno& other) : Persona(other), numAsignaturas(other.numAsignaturas) 
{
    asignaturas = new Asignatura[numAsignaturas + 1];
    for (int i = 0; i < numAsignaturas; i++) {
        asignaturas[i] = other.asignaturas[i];
    }
}

Alumno::~Alumno() 
{
    delete[] asignaturas;
}

Asignatura* Alumno::getAsignaturas() const 
{
    return asignaturas;
}

int Alumno::getNumAsignaturas() const 
{
    return numAsignaturas;
}

void Alumno::agregarAsignatura(const char* nombreAsignatura, int creditosAsignatura) 
{
    numAsignaturas++;
    Asignatura* nuevaAsignatura = new Asignatura[numAsignaturas + 1];
    for (int i = 0; i < numAsignaturas-1; i++) {
        nuevaAsignatura[i] = asignaturas[i];
    }
    nuevaAsignatura[numAsignaturas] = Asignatura(nombreAsignatura, creditosAsignatura);

    delete[] asignaturas;
    asignaturas = nuevaAsignatura;
    
}

void Alumno::imprimirInfo()
{
    Persona::imprimirInfo();
    cout << "Asignaturas matriculadas: " << endl;
    for (int i = 0; i < numAsignaturas; i++) {
        asignaturas[i].imprimirInfo();
        cout << endl;
    }
}
