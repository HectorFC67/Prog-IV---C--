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
        virtual void escribirEnFichero(const char* fichero) = 0;
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
        void escribirEnFichero(const char* fichero) override;
};
class Docente: public Persona
{
    private:
        char* titulacion;
        Asignatura asignatura[];
    public:
        Docente(int edad, char* nombre, char* titulacion, Asignatura asignatura[]);
        Docente(const Docente &d);
        ~Docente();
};
class Asignatura
{
 private:
        char* nombre;
        int curso;
        int creditos;
        int numAlumnos;
        Alumno* estudiantesMatriculados;
        int notas;
    public:

};

#endif