#ifndef LIBROPRESTADO_H
#define LIBROPRESTADO_H

#include "Libro.h"

class LibroPrestado : public Libro {
private:
    char* fechaDevolucion;

public:
    LibroPrestado(const char* titulo, const char* autor, int anyoPublicacion, const char* fechaDevolucion);
    ~LibroPrestado();
    const char* getFechaDevolucion();
    void setFechaDevolucion(const char* fechaDevolucion);
    void imprimirInfo();
};

#endif
