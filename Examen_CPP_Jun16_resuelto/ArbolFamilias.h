#ifndef ARBOLFAMILIAS_H_
#define ARBOLFAMILIAS_H_

#include "Miembro.h"
#include "Familia.h"

class ArbolFamilias
{
private:
	int numFamilias;
	Familia* familias[5];
public:
	ArbolFamilias();
	ArbolFamilias(const ArbolFamilias&);
	~ArbolFamilias();

	void anadirFamilia(Familia*);

	void imprimir() const;
	int contarMenoresEdad(int) const;
	Miembro** getConyugesInicial(int&, char) const;
};

#endif /* ARBOLFAMILIAS_H_ */
