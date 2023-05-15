#include <iostream>
#include "Punto3D.h"

using namespace std;

int main() {
    Point3D p1(1, 2, 3);
    Point3D p2(4, 5, 6);
    Point3D p3 = p1.operator+(p2); 
    p3.visualizar(); 

    p1.operator+=(p2); 
    p1.visualizar(); 

    double dot_product = p1.operator*(p2); 
    cout << "Producto escalar de p1 y p2: " << dot_product << endl;

    Point3D p4 = p1.operator*(2); 
    p4.visualizar();

    Point3D p5;
    cout << "Introduce las coordenadas x, y, z del punto separadas por espacios: ";
    cin >> p5;
    cout << "Punto introducido: " << p5 << endl;
  }