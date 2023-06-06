#include "Libro.h"
#include "LibroPrestado.h"
#include "Biblioteca.h"
#include "Prestamo.h"

int main() {
    // Crear tres objetos de la clase Libro
    Libro libro1("Libro 1", "Autor 1", 2000);
    Libro libro2("Libro 2", "Autor 2", 2010);
    Libro libro3("Libro 3", "Autor 3", 2020);

    // Crear un objeto de la clase Biblioteca y agregar los tres libros
    Biblioteca biblioteca;
    biblioteca.agregarLibro(&libro1);
    biblioteca.agregarLibro(&libro2);
    biblioteca.agregarLibro(&libro3);

    // Imprimir la informacion de la biblioteca
    biblioteca.imprimirInfo();

    // Crear dos objetos de la clase Prestamo
    LibroPrestado libroPrestado1("Libro Prestado 1", "Autor Prestado 1", 2015, "01/06/2023");
    LibroPrestado libroPrestado2("Libro Prestado 2", "Autor Prestado 2", 2018, "03/06/2023");

    Prestamo prestamo1(&libroPrestado1, "Usuario 1", "01/06/2023");
    Prestamo prestamo2(&libroPrestado2, "Usuario 2", "03/06/2023");

    // Imprimir la informacion de los dos prestamos realizados
    prestamo1.imprimirInfo();
    prestamo2.imprimirInfo();

    return 0;
}
