#ifndef LIBRO_H
#define LIBRO_H

class Libro {
    protected:
        char* titulo;
        char* autor;
        int anyoPublicacion;

    public:
        Libro(const char* titulo, const char* autor, int anyoPublicacion);
        virtual ~Libro();
        const char* getTitulo();
        void setTitulo(const char* titulo);
        const char* getAutor();
        void setAutor(const char* autor);
        int getAnoPublicacion();
        void setAnoPublicacion(int anyoPublicacion);
        virtual void imprimirInfo();
    };

#endif
