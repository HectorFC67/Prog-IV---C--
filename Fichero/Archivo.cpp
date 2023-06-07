#include "Archivo.h"
#include <fstream>

using namespace std;

Archivo::Archivo(const string& filename) : filename(filename) {}

bool Archivo::escribir(const string& contenido) {
    ofstream archivoSalida(filename);

    if (archivoSalida.is_open()) {
        archivoSalida << contenido;
        archivoSalida.close();
        return true;
    }

    return false;
}

bool Archivo::leer(string& contenido) {
    ifstream archivoEntrada(filename);

    if (archivoEntrada.is_open()) {
        string linea;
        contenido = "";

        while (getline(archivoEntrada, linea)) {
            contenido += linea + "\n";
        }

        archivoEntrada.close();
        return true;
    }

    return false;
}
