#include "clase.h"
#include <iostream>

using namespace std;

Clase::Clase()
{
    this->id = 0;
    this->personas = nullptr;
    this->numPersonas = 0;
}

Clase::Clase(int id, Persona* personas, int numPersonas)
{
    this->id = id;
    this->numPersonas = numPersonas;
    this->personas = new Persona[numPersonas];
    for (int i = 0; i < numPersonas; i++) 
    {
        this->personas[i] = personas[i];
    }
}

Clase::Clase(const Clase &other)
{
    this->id = other.id;
    this->numPersonas = other.numPersonas;
    this->personas = new Persona[this->numPersonas];
    for (int i = 0; i < this->numPersonas; i++) 
    {
        this->personas[i] = other.personas[i];
    }
}

Clase::~Clase() {
    delete[] personas;
}

int Clase::getId() const 
{
    return id;
}

Persona* Clase::getPersonas() const 
{
    return personas;
}

int Clase::getNumPersonas() const 
{
    return numPersonas;
}

void Clase::setId(int id) 
{
    this->id = id;
}

void Clase::agregarPersona(const Persona& persona) 
{
    Persona* nuevasPersonas = new Persona[numPersonas + 1];
    for (int i = 0; i < numPersonas; i++) 
    {
        nuevasPersonas[i] = personas[i];
    }
    nuevasPersonas[numPersonas] = persona;

    delete[] personas;
    personas = nuevasPersonas;
    numPersonas++;
}

void Clase::imprimirInfo() const 
{
    cout << "ID de la clase: " << id << endl;
    cout << "Personas: " << endl;
    for (int i = 0; i < numPersonas; i++) {
        personas[i].imprimirInfo();
        cout << endl;
    }
}
