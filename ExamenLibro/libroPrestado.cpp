#include "libroPrestado.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

LibroPrestado::LibroPrestado():Libro()
{
    this->fechaDevolucion = nullptr;
}
LibroPrestado::LibroPrestado(const char* titulo, const char* autor, int anyoPublicacion, const char* fechaDevolucion):Libro(titulo, autor, anyoPublicacion)
{
    this->fechaDevolucion = new char[strlen(fechaDevolucion)+1];
    for(int i=0; i<strlen(fechaDevolucion); i++)
        this->fechaDevolucion[i] = fechaDevolucion[i];
}
LibroPrestado::LibroPrestado(const LibroPrestado &lp):Libro(lp)
{
    this->fechaDevolucion = new char[strlen(lp.fechaDevolucion)+1];
    for(int i=0; i<strlen(lp.fechaDevolucion); i++)
        this->fechaDevolucion[i] = lp.fechaDevolucion[i];
}
LibroPrestado::~LibroPrestado()
{
    delete[] fechaDevolucion;
    cout << "Libro prestado eliminado" << endl;
}

char* LibroPrestado::getFechaDevolucion()
{
    return this->fechaDevolucion;
}
void LibroPrestado::setFechaDevolucion(const char* fechaDevolucion)
{
    this->fechaDevolucion = new char[strlen(fechaDevolucion)+1];
    for(int i=0; i<strlen(fechaDevolucion); i++)
        this->fechaDevolucion[i] = fechaDevolucion[i];
}
void LibroPrestado::imprimirInfo()
{

}