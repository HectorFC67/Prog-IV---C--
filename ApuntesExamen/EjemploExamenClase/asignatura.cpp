#include "asignatura.h"
#include <iostream>
#include <cstring>

using namespace std;

Asignatura::Asignatura()
{
    this->nombre = nullptr;
    this->creditos = 0;
}

Asignatura::Asignatura(const char* nombre, int creditos)
{
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
    this->creditos = creditos;
}

Asignatura::Asignatura(const Asignatura& other)
{
    this->nombre = new char[strlen(other.nombre) + 1];
    strcpy(this->nombre, other.nombre);
    this->creditos = other.creditos;
}

Asignatura::~Asignatura() {
    delete[] nombre;
}

char* Asignatura::getNombre() const {
    return nombre;
}

int Asignatura::getCreditos() const {
    return creditos;
}

void Asignatura::setNombre(const char* nombre) {
    delete[] this->nombre;
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
}

void Asignatura::setCreditos(int creditos) {
    this->creditos = creditos;
}

void Asignatura::imprimirInfo() const {
    cout << "Nombre de la asignatura: " << nombre << endl;
    cout << "Creditos: " << creditos << endl << endl;
}
