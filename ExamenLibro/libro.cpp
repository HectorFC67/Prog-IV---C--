#include "libro.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;
Libro::Libro()
{
    this->titulo = nullptr;
    this->autor = nullptr;
    this->anyoPublicacion = 0;
}
Libro::Libro(const char* titulo, const char* autor, int anyoPublicacion)
{
    this->titulo = new char[strlen(titulo)+1];
    for(int i=0; i<strlen(titulo); i++)
        this->titulo[i] = titulo[i];

    this->autor = new char[strlen(autor)+1];
    for(int i=0; i<strlen(autor); i++)
        this->autor[i] = autor[i];

    this->anyoPublicacion = anyoPublicacion;
}
Libro::Libro(const Libro &l)
{
    this->titulo = new char[strlen(l.titulo)+1];
    for(int i=0; i<strlen(l.titulo); i++)
        this->titulo[i] = titulo[i];

    this->autor = new char[strlen(l.autor)+1];
    for(int i=0; i<strlen(l.autor); i++)
        this->autor[i] = autor[i];

    this->anyoPublicacion = anyoPublicacion;
}
Libro::~Libro()
{
    delete[] this->titulo;
    delete[] this->autor;
}
char* Libro::getTitulo()
{
    return this->titulo;
}
void Libro::setTitulo(char* titulo)
{
    this->titulo = new char[strlen(titulo)+1];
    for(int i=0; i<strlen(titulo); i++)
        this->titulo[i] = titulo[i];
}
char* Libro::getAutor()
{
    return this->autor;
}
void Libro::setAutor(char* autor)
{
    this->autor = new char[strlen(autor)+1];
    for(int i=0; i<strlen(autor); i++)
        this->autor[i] = autor[i];
}
int Libro::getAnyoPublicacion()
{
    return this->anyoPublicacion;
}
void Libro::setAnyoPublicacion(int anyoPublicacion)
{
    this->anyoPublicacion = anyoPublicacion;
}
void Libro::imprimirInfo()
{
    cout << "Libro " << this->titulo << " de " << this->autor 
    << " en el anyo " << this->anyoPublicacion << endl;
}