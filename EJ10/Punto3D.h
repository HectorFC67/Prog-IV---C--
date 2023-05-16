#include <iostream>
using namespace std;

class Point3D {
private:
    double x, y, z;

public:
    Point3D(double x = 0, double y = 0, double z = 0);

    // Sobrecarga de operadores
    Point3D operator+(const Point3D& p) const;
    Point3D& operator+=(const Point3D& p);
    double operator*(const Point3D& p) const;
    Point3D operator*(double scalar) const;

    friend istream& operator>>(istream& in, Point3D& p);
    friend ostream& operator<<(ostream& out, const Point3D& p);

    void visualizar() const;
};
