#ifndef PERSONA_H
#define PERSONA_H

class Persona {
protected:
    char* dni;
    char* nombre;
    int edad;

public:
    Persona();
    Persona(const char* dni, const char* nombre, int edad);
    Persona(const Persona& other);
    virtual ~Persona();

    char* getDni() const;
    char* getNombre() const;
    int getEdad() const;

    void setDni(const char* dni);
    void setNombre(const char* nombre);
    void setEdad(int edad);

    virtual void imprimirInfo() const;
};

#endif  // PERSONA_H
