#include "LibroPrestado.h"
#include <iostream>
#include <cstring>
using namespace std;

LibroPrestado::LibroPrestado(const char* titulo, const char* autor, int anoPublicacion, const char* fechaDevolucion)
    : Libro(titulo, autor, anoPublicacion) {
    this->fechaDevolucion = new char[strlen(fechaDevolucion) + 1];
    strcpy(this->fechaDevolucion, fechaDevolucion);
}

LibroPrestado::~LibroPrestado() {
    delete[] fechaDevolucion;
}

const char* LibroPrestado::getFechaDevolucion() {
    return fechaDevolucion;
}

void LibroPrestado::setFechaDevolucion(const char* fechaDevolucion) {
    delete[] this->fechaDevolucion;
    this->fechaDevolucion = new char[strlen(fechaDevolucion) + 1];
    strcpy(this->fechaDevolucion, fechaDevolucion);
}

void LibroPrestado::imprimirInfo() {
    Libro::imprimirInfo();
    cout << "Fecha de devolución: " << fechaDevolucion << endl;
}
