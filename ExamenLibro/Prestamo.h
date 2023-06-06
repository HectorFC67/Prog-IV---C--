#ifndef PRESTAMO_H
#define PRESTAMO_H

#include "LibroPrestado.h"

class Prestamo {
private:
    LibroPrestado* libro;
    char* usuario;
    char* fechaPrestamo;

public:
    Prestamo(LibroPrestado* libro, const char* usuario, const char* fechaPrestamo);
    ~Prestamo();
    const char* getUsuario();
    void setUsuario(const char* usuario);
    const char* getFechaPrestamo();
    void setFechaPrestamo(const char* fechaPrestamo);
    void imprimirInfo();
};

#endif
