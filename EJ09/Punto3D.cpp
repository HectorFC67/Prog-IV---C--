#include "Punto3D.h"
#include <iostream>

using namespace std;

Punto3D::Punto3D(float x, float y, float z) : Punto(x, y) {
  this->z = z;
}

void Punto3D::visualizar() {
  cout << "Punto3D (" << x << ", " << y << ", " << z << ")" << endl;
}

Punto3D Punto3D::operator*(const Punto3D& other) const {
  float x = this->y * other.z - this->z * other.y;
  float y = this->z * other.x - this->x * other.z;
  float z = this->x * other.y - this->y * other.x;
  return Punto3D(x, y, z);
}

void Punto3D::operator*(int escalar) {
  this->x *= escalar;
  this->y *= escalar;
  this->z *= escalar;
}
