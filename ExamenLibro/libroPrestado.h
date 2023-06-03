#include "libro.h"

#ifndef LIBRO_PRESTADO_H
#define LIBRO_PRESTADO_H

class LibroPrestado : public Libro
{
    private:
        char* fechaDevolucion;
    public:
        LibroPrestado();
        LibroPrestado(const char* titulo, const char* autor, int anyoPublicacion, const char* fechaDevolucion);
        LibroPrestado(const LibroPrestado &l);
        ~LibroPrestado();
        char* getFechaDevolucion();
        void setFechaDevolucion(const char* fechaDevolucion);
        void imprimirInfo() override;
};

#endif