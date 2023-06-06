#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Libro.h"

class Biblioteca {
private:
    Libro** libros;
    int numLibros;

public:
    Biblioteca();
    ~Biblioteca();
    void agregarLibro(Libro* libro);
    void imprimirInfo();
};

#endif
