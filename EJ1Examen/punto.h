#ifndef PUNTO_H_
#define PUNTO_H_

class Punto
{
    private:
        char* nombre;
        int x;
        int y;
        Punto* siguiente;
    public:
        Punto();
        Punto(char* nombre, int x, int y);
        Punto(char* nombre, int x, int y, Punto siguiente);
        ~Punto();
        float distancia(Punto p2);
};

#endif