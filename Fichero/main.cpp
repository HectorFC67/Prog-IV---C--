#include <iostream>
#include "Archivo.h"

using namespace std;

int main() {
    string filename = "archivo.txt";
    Archivo archivo(filename);

    // Escribir en el archivo
    if (archivo.escribir("Hola, mundo!\nEste es un programa en C++.\n")) {
        cout << "Escribiendo en el archivo " << filename << endl;
    } else {
        cout << "No se pudo abrir el archivo " << filename << " para escritura." << endl;
        return 1;
    }

    // Leer el archivo
    string contenido;
    if (archivo.leer(contenido)) {
        cout << "Leyendo el archivo " << filename << endl;
        cout << contenido;
    } else {
        cout << "No se pudo abrir el archivo " << filename << " para lectura." << endl;
        return 1;
    }

    return 0;
}
