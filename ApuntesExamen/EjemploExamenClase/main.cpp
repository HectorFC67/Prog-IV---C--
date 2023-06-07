#include "clase.h"
#include "alumno.h"
#include "profesor.h"

int main() {
    // Crear una asignatura
    Asignatura matematicas("Matematicas", 5);
    matematicas.imprimirInfo();

    // Crear profesor
    Profesor profesor("12345678X", "Juan", 35, matematicas);
    profesor.imprimirInfo();

    // Crear asignatura
    Asignatura asignatura1("Programacion", 6);
    Asignatura asignatura2("BD", 6);

    // Crear lista asignaturas
    Asignatura* asignaturas;
    asignaturas[0] = asignatura1;
    asignaturas[1] = asignatura2;

    // Crear alumno
    Alumno alumno("87654321Y", "Ana", 20, asignaturas, 2);
    alumno.agregarAsignatura("Fisica", 4);
    alumno.agregarAsignatura("Quimica", 3);
    alumno.imprimirInfo();

    // Crear una clase
    Persona personas[] = {profesor, alumno};
    int numPersonas = sizeof(personas) / sizeof(personas[0]);
    Clase clase(1, personas, numPersonas);
    clase.imprimirInfo();

    // Agregar otro profesor

    Profesor otroProfesor("98765432Z", "Maria", 40, asignatura1);
    clase.agregarPersona(otroProfesor);

    // Agregar un alumno
    Alumno otroAlumno("12345678X", "Juan", 22, asignaturas, 2);
    clase.agregarPersona(otroAlumno);

    // Imprimir la lista actualizada
    clase.imprimirInfo();

    return 0;
}
