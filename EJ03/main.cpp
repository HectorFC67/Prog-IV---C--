#include "Point.h"
#include <iostream>
using namespace std;

int main(void)
{
    Point p1(6,7);
    Point *p2 = new Point(4,5);
    Point p3 = p1.getSuma(*p2);
    
    p1.print();
	cout << " + ";
	p2->print();
	cout << " = ";
	p3.print();

	cout << endl;

	p1.suma1(*p2);
	p1.print();

	cout << endl;

	p1.suma2(*p2);
	p1.print();

	cout << endl;

	p1.suma3(p2);
	p1.print();

	cout << endl;

	Point p4(4,5);

	cout << "P2 (start): ";
	p2->print();

	cout << endl;

	p1.swap1(*p2);
	cout << "P2 (swap1): ";
	p2->print();

	cout << endl;

	p3.swap2(*p2);
	cout << "P2 (swap2): ";
	p2->print();

	cout << endl;

	p4.swap3(p2);
	cout << "P2 (swap3): ";
	p2->print();

	delete p2;

	return 0;
}