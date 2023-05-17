#include "alumno.h"
#include "iostream"
using namespace std;

void printAlumno(Alumno alumno)
{
    // Imprime el ID y el nombre del Alumno
    cout << "* Alumno" << endl;
    cout << "\t*ID: " << alumno.getID() << endl;
    cout << "\t*Nombre: " << alumno.getNombre() << endl;
}
void printAlumnoRef(Alumno &alumno)
{
    //Imprime el ID y el nombre del Alumno
    
    cout << "* Alumno" << endl;
    cout << "\t*ID: " << alumno.getID() << endl;
    cout << "\t*Nombre: " << alumno.getNombre() << endl;

}
void printAlumnoP(Alumno * alumno)
{
    // Imprime el ID y el nombre del Alumno
    cout << "* Alumno" << endl;
    cout << "\t*ID: " << alumno->getID() << endl;
    cout << "\t*Nombre: " << alumno->getNombre() << endl;
}

int main(void)
{
    Alumno a("Hector ");
    printAlumno(a);
    cout << endl;
    cout << endl;

    printAlumno(a);
    
    cout << endl;
    cout << endl;
    
    printAlumnoRef(a);

    cout << endl;
    cout << endl;


    Alumno b = a; //Debe ser una copia de a
    Alumno c(b); //Debe ser una copia de b


    printAlumnoP(&c); 
	cout << endl;

	cout << "Reserva mediante operador new" << endl;
	Alumno *d = new Alumno(c); 
	cout << endl;
	cout << endl;

	cout << "Llamada mediando paso de puntero" << endl;
	printAlumnoP(d);
	cout << endl;
	cout << endl;

	cout << "Borrado manual del objeto reservado utilizando operador delete" << endl;
	delete d;

	cout << "Llamada a paso por referencia" << endl;
	printAlumnoRef(a); 
	cout << endl;
	cout << endl;

    cout << "Vamos a crear alumno asignando los valores de otro existente" << endl;
    Alumno e = Alumno ("Alumno E");
    e = a;
    printAlumnoRef(e);
	cout << "Eliminacion automatica de las variables no dinamicas" << endl;
	return 0;
    
}