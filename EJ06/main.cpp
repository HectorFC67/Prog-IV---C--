#include "Herencia.h"
#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    float notas[3] = {7, 8.5, 9.99};
    /*Persona* p1 = new Persona(5, "Juan");
    Persona* p2 = new Persona(*p1);
    Alumno* a = new Alumno(20, "Roberto", 3, notas);
    Persona* p = a;
    p->diHola();
    a->diHola();*/
    Alumno a(20, "Roberto", 3, notas);
    a.escribirEnFichero("fichero.txt");
    return 0;
}