#ifndef LIBRO_H
#define LIBRO_H

class Libro
{
    private:
        char* titulo;
        char* autor;
        int anyoPublicacion;
    public:
        Libro();
        Libro(const char* titulo, const char* autor, int anyoPublicacion);
        Libro(const Libro &l);
        ~Libro();
        char* getTitulo();
        void setTitulo(char* titulo);
        char* getAutor();
        void setAutor(char* autor);
        int getAnyoPublicacion();
        void setAnyoPublicacion(int anyoPublicacion);
        virtual void imprimirInfo();
};

#endif