#ifndef MIEMBRO_H_
#define MIEMBRO_H_

class Miembro
{
private:
	char* nombre;
	int edad;
public:
	Miembro();
	Miembro(const char*, int);
	Miembro(const Miembro&);
	~Miembro();
	char* getNombre() const;
	void setNombre(const char*);
	int getEdad() const;
	void setEdad(int);
	char* toStr() const;
};

#endif /* MIEMBRO_H_ */
