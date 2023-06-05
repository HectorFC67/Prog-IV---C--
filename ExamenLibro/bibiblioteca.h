#include "libro.h"

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

class Biblioteca
{
    private:
        Libro* libros;
    public:
        Biblioteca();
        Biblioteca(Libro* libros);
        Biblioteca(const Biblioteca &b);
        ~Biblioteca();
        Libro* getLibros();
        void setLibros(Libro* libros);
        void agregarLibro(Libro libro);
        void imprimirInfo() const;
};

#endif