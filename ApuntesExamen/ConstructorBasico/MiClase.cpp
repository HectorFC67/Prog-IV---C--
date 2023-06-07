#include "MiClase.h"
#include <iostream>
#include <cstring>

using namespace std;

// Constructor vacío
MiClase::MiClase() {
    variable1 = 0;
    variable2 = nullptr;
}

// Constructor
MiClase::MiClase(int var1, const char* var2) {
    variable1 = var1;
    variable2 = new char[strlen(var2) + 1];
    strcpy(variable2, var2);
}

// Constructor de copia
MiClase::MiClase(const MiClase& other) {
    variable1 = other.variable1;
    variable2 = new char[strlen(other.variable2) + 1];
    strcpy(variable2, other.variable2);
}

// Destructor
MiClase::~MiClase() {
    delete[] variable2;
}

// Getters y Setters
int MiClase::getVariable1() const {
    return variable1;
}

void MiClase::setVariable1(int var1) {
    variable1 = var1;
}

const char* MiClase::getVariable2() const {
    return variable2;
}

void MiClase::setVariable2(const char* var2) {
    delete[] variable2;
    variable2 = new char[strlen(var2) + 1];
    strcpy(variable2, var2);
}

// Método para imprimir la información por consola
void MiClase::imprimirInformacion() const {
    cout << "Variable 1: " << variable1 << std::endl;
    cout << "Variable 2: " << variable2 << std::endl;
}
