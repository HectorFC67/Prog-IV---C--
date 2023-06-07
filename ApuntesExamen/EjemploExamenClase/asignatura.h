#ifndef ASIGNATURA_H
#define ASIGNATURA_H

class Asignatura {
private:
    char* nombre;
    int creditos;

public:
    Asignatura();
    Asignatura(const char* nombre, int creditos);
    Asignatura(const Asignatura& other);
    ~Asignatura();

    char* getNombre();
    int getCreditos();

    void setNombre(const char* nombre);
    void setCreditos(int creditos);

    void imprimirInfo();
};

#endif  // ASIGNATURA_H
