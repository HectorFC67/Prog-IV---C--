#ifndef LIBRO_H
#define LIBRO_H

class Libro {
    protected:
        char* titulo;
        char* autor;
        int anoPublicacion;

    public:
        Libro(const char* titulo, const char* autor, int anoPublicacion);
        virtual ~Libro();
        const char* getTitulo();
        void setTitulo(const char* titulo);
        const char* getAutor();
        void setAutor(const char* autor);
        int getAnoPublicacion();
        void setAnoPublicacion(int anoPublicacion);
        virtual void imprimirInfo();
    };

#endif
