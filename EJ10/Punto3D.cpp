#include "Punto3D.h"

Point3D::Point3D(double x, double y, double z) : x(x), y(y), z(z) {}

Point3D Point3D::operator+(const Point3D& p) const {
    return Point3D(x + p.x, y + p.y, z + p.z);
}

Point3D& Point3D::operator+=(const Point3D& p) {
    x += p.x;
    y += p.y;
    z += p.z;
    return *this;
}

double Point3D::operator*(const Point3D& p) const {
    return x * p.x + y * p.y + z * p.z;
}

Point3D Point3D::operator*(double scalar) const {
    return Point3D(x * scalar, y * scalar, z * scalar);
}

istream& operator>>(istream& in, Point3D& p) {
    in >> p.x >> p.y >> p.z;
    return in;
}

ostream& operator<<(ostream& out, const Point3D& p) {
    out << "(" << p.x << ", " << p.y << ", " << p.z << ")";
    return out;
}

void Point3D::visualizar() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}
