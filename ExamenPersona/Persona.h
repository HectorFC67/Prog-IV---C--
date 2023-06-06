#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
    private:
        char* nombre;
        int edad;
    public:
        Persona();
        Persona(char* nombre, int edad);
        Persona(const Persona &p);
        ~Persona();
        char* getNombre();
        void setNombre(char* nombre);
        int getEdad();
        void setEdad(int edad);
        virtual void imprimirInfo() = 0;
};

#endif