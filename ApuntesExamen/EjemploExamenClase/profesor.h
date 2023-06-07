#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include "asignatura.h"

class Profesor : public Persona {
private:
    Asignatura asignatura;

public:
    Profesor();
    Profesor(const char* dni, const char* nombre, int edad, Asignatura asignatura);
    Profesor(const Profesor& other);
    ~Profesor();

    Asignatura getAsignatura();
    void setAsignatura(Asignatura asignatura);

    void imprimirInfo() override;
};

#endif  // PROFESOR_H
