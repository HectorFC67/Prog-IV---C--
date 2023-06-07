#ifndef FIGURA_H_
#define FIGURA_H_

class Figura
{
	char * nombre;
	static int numFiguras;

public:
	Figura(const char * nombre);
	Figura(const Figura& f);
	virtual ~Figura();

	char* getNombre() const;

	virtual void imprimir();
	virtual float getPerimetro() = 0;

	static int getNumFiguras();
};

#endif /* FIGURA_H_ */
