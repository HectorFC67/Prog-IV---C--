#include "Biblioteca.h"
#include <iostream>
using namespace std;

Biblioteca::Biblioteca() {
    libros = nullptr;
    numLibros = 0;
}

Biblioteca::~Biblioteca() {
    for (int i = 0; i < numLibros; i++) {
        delete libros[i];
    }
    delete[] libros;
}

void Biblioteca::agregarLibro(Libro* libro) {
    Libro** temp = new Libro*[numLibros + 1];
    for (int i = 0; i < numLibros; i++) {
        temp[i] = libros[i];
    }
    temp[numLibros] = libro;
    delete[] libros;
    libros = temp;
    numLibros++;
}

void Biblioteca::imprimirInfo() {
    for (int i = 0; i < numLibros; i++) {
        libros[i]->imprimirInfo();
        cout << endl;
    }
}
