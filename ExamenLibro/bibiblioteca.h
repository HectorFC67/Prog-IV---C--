#include "libro.h"

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

class Biblioteca
{
    private:
        Libro* libros;
        int numLibros;
    public:
        Biblioteca();
        Biblioteca(Libro* libros, int numLibros);
        Biblioteca(const Biblioteca &b);
        ~Biblioteca();
        Libro* getLibros();
        void setLibros(Libro* libros, int numLibros);
        int getNumLibros();
        void setNumLibros(int numLibros);
        void agregarLibro(Libro libro);
        void imprimirInfo() const;
};

#endif