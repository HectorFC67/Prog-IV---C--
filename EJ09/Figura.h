#ifndef FIGURA_H_
#define FIGURA_H_
#include "Punto3D.h"

using namespace std;

class Figura
{
    private:
        Punto3D* arrayPuntos3D;
        int tamanyo;
        char* nombre;
    public:
        Figura();
        Figura(Punto3D* arrayPuntos3D, int tamanyo, char* nombre);
        Figura(Figura& const figuraCopia);
        ~Figura();
        int getTamanyo();
        char* getNombre();
        Punto3D* getArrayPuntos3D();
        void setTamanyo(int tamanyo);
        void setNombre(char* nombre);
        void setArrayPuntos3D(Punto3D* arrayPuntos3D);
        int getPerimetro(Punto3D arrayPuntos3D);
        Figura& operator==(Figura& figura);
        Figura& operator=(Figura& figura);
};
#endif