#include "clase.h"
#include "alumno.h"
#include "profesor.h"
#include <iostream>

using namespace std;

int main() {
    // Crear una persona
    Persona persona1("12345678", "Juan", 25);
    cout << "Informacion de la persona 1:" << endl;
    persona1.imprimirInfo();

    // Crear una asignatura
    Asignatura asignatura1("Matematicas", 5);
    cout << "Informacion de la asignatura 1:" << endl;
    asignatura1.imprimirInfo();

    // Crear un profesor
    Profesor profesor1("87654321", "Maria", 30, asignatura1);
    cout << "Informacion del profesor 1:" << endl;
    profesor1.imprimirInfo();

    // Crear un alumno
    Asignatura asignaturasAlumno[] = {
        Asignatura("Fisica", 4),
        Asignatura("Quimica", 4)
    };
    Alumno alumno1("56789012", "Pedro", 20, asignaturasAlumno, 2);
    cout << "Informacion del alumno 1:" << endl;
    alumno1.imprimirInfo();

    // Crear una clase
    Persona personasClase[] = { persona1, profesor1, alumno1 };
    Clase clase1(1, personasClase, 3);
    cout << "Informacion de la clase 1:" << endl;
    clase1.imprimirInfo();

    // Agregar una asignatura al alumno
    alumno1.agregarAsignatura("Biologia", 3);
    alumno1.imprimirInfo();

    // Agregar una persona a la clase
    Persona nuevaPersona("13579024", "Luisa", 22);
    clase1.agregarPersona(nuevaPersona);
    clase1.imprimirInfo();

    return 0;
}
