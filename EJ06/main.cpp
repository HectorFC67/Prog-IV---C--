#include "Herencia.h"
#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    float notas[3] = {7, 8.5, 4};
    Alumno* a = new Alumno(20, "Roberto", 3, notas);
    Persona* p = a;

    p->diHola();
    a->diHola();
    return 0;
}