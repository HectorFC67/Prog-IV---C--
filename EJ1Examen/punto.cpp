#include "punto.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Punto::Punto()
{
    this->nombre = NULL;
    this->x = 0;
    this->y = 0;
    this->siguiente = NULL;
}
Punto::Punto(char* nombre, int x, int y)
{
    this->nombre = new char[strlen(nombre)+1];
    strcpy(this->nombre, nombre);
    this->x = x;
    this->y = y;
    this->siguiente = NULL;
}
Punto::Punto(char* nombre, int x, int y, Punto siguiente)
{
    this->nombre = new char[strlen(nombre)+1];
    strcpy(this->nombre, nombre);
    this->x = x;
    this->y = y;
    this->siguiente = new Punto(siguiente.nombre, siguiente.x, siguiente.y);
}
Punto::~Punto()
{
    delete[](this->nombre);
    delete(this->siguiente);
}
float Punto::distancia(Punto p2)
{
    return sqrt(((p2.x - this->x) * (p2.x - this->x)) + ((p2.y - this->y) * (p2.y - this->y)));
}