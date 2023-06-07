#ifndef CLASE_H
#define CLASE_H

#include "persona.h"

class Clase {
private:
    int id;
    Persona* personas;
    int numPersonas;

public:
    Clase();
    Clase(int id, Persona* personas, int numPersonas);
    Clase(const Clase &other);
    ~Clase();

    int getId() const;
    Persona* getPersonas() const;
    int getNumPersonas() const;

    void setId(int id);
    void agregarPersona(const Persona& persona);

    void imprimirInfo() const;
};

#endif  // CLASE_H
