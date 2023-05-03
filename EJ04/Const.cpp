#include "Const.h"
#include <iostream>

using  namespace std;


Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}
void Point::setX(float x)
{
    this->x = x;
}
void Point::setY(float y)
{
    this->y = y;

}
float Point::getX() const
{
    return x;
}
float Point::getY() const
{
    return y;

}
void Point::sumar(const Point &p)
{
    this->x += p.x;
    this->y += p.y;
}