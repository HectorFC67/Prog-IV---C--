#include "Libro.h"
#include <iostream>
#include <cstring>
using namespace std;

Libro::Libro(const char* titulo, const char* autor, int anoPublicacion) {
    this->titulo = new char[strlen(titulo) + 1];
    strcpy(this->titulo, titulo);

    this->autor = new char[strlen(autor) + 1];
    strcpy(this->autor, autor);

    this->anoPublicacion = anoPublicacion;
}

Libro::~Libro() {
    delete[] titulo;
    delete[] autor;
}

const char* Libro::getTitulo() {
    return titulo;
}

void Libro::setTitulo(const char* titulo) {
    delete[] this->titulo;
    this->titulo = new char[strlen(titulo) + 1];
    strcpy(this->titulo, titulo);
}

const char* Libro::getAutor() {
    return autor;
}

void Libro::setAutor(const char* autor) {
    delete[] this->autor;
    this->autor = new char[strlen(autor) + 1];
    strcpy(this->autor, autor);
}

int Libro::getAnoPublicacion() {
    return anoPublicacion;
}

void Libro::setAnoPublicacion(int anoPublicacion) {
    this->anoPublicacion = anoPublicacion;
}

void Libro::imprimirInfo() {
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Año de publicación: " << anoPublicacion << endl;
}
