#include "Referencia.h"
#include <iostream>

using namespace std;

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}
void Point::suma1(Point p)
{
    this->x += p.x;
    this->y += p.y;
}
void Point::suma2(Point &p)
{
    this->x += p.x;
    this->y += p.y;
}
void Point::suma3(Point *p)
{
    this->x += p->x;
    this->y += p->y;
}
Point Point::getSuma(Point &p)
{
    Point newPoint(0,0);
    suma2(p);
    newPoint.x = this->x;
    newPoint.y = this->y;
    return newPoint;
}
void Point::print()
{
    cout << "Punto: (%i, %i)" << endl;
}
void Point::swap1(Point p)
{
    int x = this->x;
    int y = this->y;
    this->x = p.x;
    this->y = p.y;
    p.x = x;
    p.y = y;
}
void Point::swap2(Point &p)
{
    int x = this->x;
    int y = this->y;
    this->x = p.x;
    this->y = p.y;
    p.x = x;
    p.y = y;
}
void Point::swap3(Point *p)
{
    int x = this->x;
    int y = this->y;
    this->x = p->x;
    this->y = p->y;
    p->x = x;
    p->y = y;
}