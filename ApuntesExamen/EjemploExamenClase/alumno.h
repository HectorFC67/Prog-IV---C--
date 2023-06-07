#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
#include "asignatura.h"

class Alumno : public Persona {
private:
    Asignatura* asignaturas;
    int numAsignaturas; 

public:
    Alumno();
    Alumno(const char* dni, const char* nombre, int edad, Asignatura* asignaturas, int numAsignaturas);
    Alumno(const Alumno& other);
    ~Alumno();

    Asignatura* getAsignaturas() const; 
    int getNumAsignaturas() const; 
    void agregarAsignatura(const char* nombreAsignatura, int creditosAsignatura);

    void imprimirInfo() const override;
};

#endif  // ALUMNO_H
