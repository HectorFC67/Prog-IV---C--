#include "Punto.h"

void imprimirDetalleFigura(Figura &f)
{
	// TAREA 4.2: Implementar esta función.
}

float sumarPerimetros(Figura * figuras[], int numFiguras)
{
	// TAREA 4.3: Implementar esta función.
}

int main(void)
{
	Circulo c1("Circulo1", Punto(1,2), 3);
	Circulo *c2 = new Circulo("Circulo2", Punto(2,1), 4);

	Punto vertices[] = {Punto(1,1), Punto(1,2), Punto(2,1)};
	Poligono *p1 = new Poligono("Triangulo", 3, vertices);

	// TAREA 4.1: Imprimir por pantalla el numero de figuras creadas

	// TAREA 4.2: Imprime el detalle de cada una de las figuras existentes

	// TAREA 4.3: Imprimir por pantalla la suma de los perimetros de las 3 figuras

	return 0;
}
