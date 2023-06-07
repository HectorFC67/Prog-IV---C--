#include "MiClase.h"
#include <iostream>

using namespace std;

int main() {
    // Crear una instancia de MiClase utilizando el constructor vacío
    MiClase objeto1;
    objeto1.setVariable1(10);
    objeto1.setVariable2("Hola");

    // Imprimir información antes de realizar cambios
    cout << "Informacion de objeto1 antes de cambios:" << endl;
    objeto1.imprimirInformacion();
    cout << endl;

    // Crear una instancia de MiClase utilizando el constructor
    MiClase objeto2(20, "Mundo");

    // Imprimir información antes de realizar cambios
    cout << "Informacion de objeto2 antes de cambios:" << endl;
    objeto2.imprimirInformacion();
    cout << endl;

    // Utilizar el constructor de copia para crear un nuevo objeto
    MiClase objeto3(objeto2);

    // Imprimir información antes de realizar cambios
    cout << "Informacion de objeto3 antes de cambios:" << endl;
    objeto3.imprimirInformacion();
    cout << endl;

    // Modificar los valores de las variables
    objeto1.setVariable1(30);
    objeto1.setVariable2("Adios");

    objeto2.setVariable1(40);
    objeto2.setVariable2("GPT-3.5");

    // Imprimir información después de los cambios
    cout << "Informacion de objeto1 despues de cambios:" << endl;
    objeto1.imprimirInformacion();
    cout << endl;

    cout << "Informacion de objeto2 despues de cambios:" << endl;
    objeto2.imprimirInformacion();
    cout << endl;

    cout << "Informacion de objeto3 despues de cambios:" << endl;
    objeto3.imprimirInformacion();
    cout << endl;

    return 0;
}
