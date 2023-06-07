#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include "ArbolFamilias.h"

#include <iostream>
using namespace std;

int main()
{
	Miembro luis("Luis Diez", 60 /*años*/);
	Miembro marta("Marta Sanchez", 58);
	Miembro angel("Angel Diez", 32);
	Miembro laura("Laura Ponte", 30);
	Miembro hodei("Hodei Diez", 2);
	Miembro ana("Ana Diez", 7);
	Miembro pablo("Pablo Diez", 10);
	Miembro jon("Jon Pena", 40);
	Miembro maite("Maite Pazos", 35);

	cout<< luis.toStr() << " os desea suerte en el examen." << endl;

	// APARTATO 3

	ConHijos* ch2 = new ConHijos(&luis, &marta, 1);
	ch2->setHijo(&angel, 1);

	ConHijos* ch1 = new ConHijos();
	ch1->setConyugeH(&angel);
	ch1->setConyugeM(&laura);
	ch1->setNumHijos(3);
	ch1->setHijo(&hodei, 1);
	ch1->setHijo(&ana, 2);
	ch1->setHijo(&pablo, 3);

	Familia* f1 = new Familia(&jon, &maite);

	cout << endl;
	f1->imprimir();
	cout << endl;
	ch1->imprimir();
	cout << endl;

	// APARTATO 5

	ArbolFamilias af;
	af.anadirFamilia(ch1);
	af.anadirFamilia(ch2);
	af.anadirFamilia(f1);

	af.imprimir();
	cout << "Menores 35 años: " << af.contarMenoresEdad(35) << " miembros" << endl;

	int numConyuges;
	Miembro** conyuges=af.getConyugesInicial(numConyuges, 'L');

	cout << endl;
	cout << "Conyuges cuyo nombre empieza por L:" << endl;
	for(int i=0;i<numConyuges;i++)
	{
		cout << conyuges[i]->toStr() << endl;
	}

	delete f1;
	delete ch1;
	delete ch2;
	delete[] conyuges;

	return 0;
}
