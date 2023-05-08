#ifndef HERENCIA_H_
#define HERENCIA_H_

class Persona
{
    protected:
        int edad;
        char* nombre;
    public:
        Persona(int edad, const char* nombre);
        Persona(const Persona &p);
        ~Persona();
        int getEdad();
        char* getNombre();
};

class Alumno: public Persona
{
    private:
        int numAsignaturas;
        float* notas;
    public:
        Alumno(int edad, char* nombre, int numAsignaturas, float* notas);
        Alumno(const Alumno &a);
        ~Alumno();
        int getNumAsignaturas();
        float* getNotas();
        void setNotas(float* notas);
};

#endif