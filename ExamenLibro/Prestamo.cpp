#include "Prestamo.h"
#include <iostream>
#include <cstring>
using namespace std;

Prestamo::Prestamo(LibroPrestado* libro, const char* usuario, const char* fechaPrestamo) {
    this->libro = libro;

    this->usuario = new char[strlen(usuario) + 1];
    strcpy(this->usuario, usuario);

    this->fechaPrestamo = new char[strlen(fechaPrestamo) + 1];
    strcpy(this->fechaPrestamo, fechaPrestamo);
}

Prestamo::~Prestamo() {
    delete libro;
    delete[] usuario;
    delete[] fechaPrestamo;
}

const char* Prestamo::getUsuario() {
    return usuario;
}

void Prestamo::setUsuario(const char* usuario) {
    delete[] this->usuario;
    this->usuario = new char[strlen(usuario) + 1];
    strcpy(this->usuario, usuario);
}

const char* Prestamo::getFechaPrestamo() {
    return fechaPrestamo;
}

void Prestamo::setFechaPrestamo(const char* fechaPrestamo) {
    delete[] this->fechaPrestamo;
    this->fechaPrestamo = new char[strlen(fechaPrestamo) + 1];
    strcpy(this->fechaPrestamo, fechaPrestamo);
}

void Prestamo::imprimirInfo() {
    cout << "Información del préstamo:" << endl;
    libro->imprimirInfo();
    cout << "Usuario: " << usuario << endl;
    cout << "Fecha de préstamo: " << fechaPrestamo << endl;
}
