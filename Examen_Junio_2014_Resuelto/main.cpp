#include "Circulo.h"
#include "Poligono.h"

#include <iostream>
using namespace std;

float sumarPerimetros(Figura * figuras[], int numFiguras)
{
	float perimetros = 0;
	for(int i=0;i<numFiguras;i++)
	{
		perimetros += figuras[i]->getPerimetro();
	}
	return perimetros;
}

void imprimirDetalleFigura(Figura &f)
{
	cout << "-----" << endl;
	f.imprimir();
	cout << "Perimetro: " << f.getPerimetro() << endl;
}

int main(void)
{
	Circulo c1("Circulo1", Punto(1,2), 3);
	Circulo *c2 = new Circulo("Circulo2", Punto(2,1), 4);

	Punto vertices[] = {Punto(1,1), Punto(1,2), Punto(2,1)};
	Poligono *p1 = new Poligono("Triangulo", 3, vertices);

	// TAREA 1: Imprimir por pantalla el numero de figuras creadas
	cout << "NUMERO FIGURAS = " << Figura::getNumFiguras() << endl;

	// TAREA 2: Imprime el detalle de cada una de las figuras existentes
	imprimirDetalleFigura(c1);
	imprimirDetalleFigura(*c2);
	imprimirDetalleFigura(*p1);

	// TAREA 3: Imprimir por pantalla la suma de los perimetros de las 3 figuras
	Figura * figuras[] = {&c1, c2, p1};
	cout << "-----" << endl;
	cout << "SUMA PERIMETROS = " << sumarPerimetros(figuras, 3) << endl;

	delete c2;
	delete p1;

	return 0;
}
