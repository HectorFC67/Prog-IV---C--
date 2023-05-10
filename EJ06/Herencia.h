#ifndef HERENCIA_H_
#define HERENCIA_H_

class Persona
{
    protected:
        int edad;
        char* nombre;
    public:
        Persona(int edad, char* nombre);
        Persona(const Persona &p);
        virtual~Persona();
        int getEdad();
        char* getNombre();
        virtual void diHola();
};

class Alumno: public Persona
{
    private:
        int numAsignaturas;
        float* notas;
    public:
        Alumno(int edad, char* nombre, int numAsignaturas, float* notas);
        Alumno(const Alumno &a);
        virtual~Alumno();
        int getNumAsignaturas();
        float* getNotas();
        void setNotas(float* notas);
        void diHola() override;   
};

#endif