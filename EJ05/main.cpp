#include <iostream>
#include "alumno.h"
using namespace std;

int main(void)
{    
    Alumno alumno1 = Alumno("Diego");
    cout << "Hemos creado al alumno "<< alumno1.getNombre() <<" con el ID " << alumno1.getID() << endl;
}