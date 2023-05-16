#include "Punto.h"
#include "Punto3D.h"

int main() {
  Punto* puntos[5];
  puntos[0] = new Punto(1, 2);
  puntos[1] = new Punto3D(3, 4, 5);
  puntos[2] = new Punto(6, 7);
  puntos[3] = new Punto3D(8, 9, 10);
  puntos[4] = new Punto(11, 12);

  for (int i = 0; i < 5; i++) {
    puntos[i]->visualizar();
  }

  Punto3D punto1(1, 2, 3);
  Punto3D punto2(4, 5, 6);
  Punto3D punto3 = punto1.operator*(punto2);
  punto3.visualizar();

  Punto3D punto4(1, 2, 3);
  punto4.operator*(2);
  punto4.visualizar();

  return 0;
}
