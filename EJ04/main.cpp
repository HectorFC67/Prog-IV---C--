#include "Const.h"
#include <iostream>
using namespace std;


int main(void)
{
    const Point p(4,8);
    /*p.setX(3);
    p.setY(4);
    p.sumar(p);*/

    Point p2(2,4);
    p2.sumar(p);

    const Point p3(5,8);

    p2.sumar(p3);
}