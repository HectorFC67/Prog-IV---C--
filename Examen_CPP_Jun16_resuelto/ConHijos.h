#ifndef CONHIJOS_H_
#define CONHIJOS_H_

#include "Familia.h"
#include "Miembro.h"

class ConHijos: public Familia
{
private:
	int numHijos;
	Miembro** hijos;
public:
	ConHijos();
	ConHijos(Miembro*, Miembro*, int);
	ConHijos(const ConHijos&);
	virtual ~ConHijos();

	void setNumHijos(int);
	void setHijo(Miembro*, int);
	Miembro* getHijo(int) const;
	int getNumHijos() const;
	Miembro** getHijos() const;

	virtual void imprimir();
	virtual int contarMenoresEdad(int);
};

#endif /* CONHIJOS_H_ */
