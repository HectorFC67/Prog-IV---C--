#ifndef FAMILIA_H_
#define FAMILIA_H_

#include "Miembro.h"

class Familia
{
private:
	Miembro* conyugeH;
	Miembro* conyugeM;
public:
	Familia();
	Familia(Miembro*, Miembro*);
	Familia(const Familia&);
	virtual ~Familia();

	void setConyugeH(Miembro*);
	Miembro* getConyugeH() const;
	void setConyugeM(Miembro*);
	Miembro* getConyugeM() const;

	char* getNombre() const;
	virtual void imprimir();
	virtual int contarMenoresEdad(int);
};

#endif /* FAMILIA_H_ */
