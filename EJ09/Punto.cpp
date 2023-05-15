#include "Punto.h"
#include <iostream>

using namespace std;

Punto::Punto(float x, float y) {
  this->x = x;
  this->y = y;
}

void Punto::visualizar() {
  cout << "Punto (" << x << ", " << y << ")" << endl;
}
