#include "alumno.h"
#include <iostream>
#include <string.h>
using namespace std;

    Alumno::Alumno(const char *nombre)
    {
        this->id = ++counter;
        this->nombre = new char(strlen(nombre)+1);
        for(int i = 0; i < strlen(nombre); i++)
        {
            this->nombre[i] = nombre[i];
        }
        cout << "Has creado un alumno"<< endl;
    }
    Alumno::~Alumno()
    {
        delete[] this->nombre;
        cout << "Has destruido un alumno"<< endl;
    }
    int Alumno::getID()
    {
        return this->id;
    }
    char* Alumno::getNombre()
    {
        return this->nombre;
    }
    int Alumno::counter = 0;