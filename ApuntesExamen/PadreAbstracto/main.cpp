#include <iostream>
#include <string.h>

using namespace std;

// Clase abstracta con el método abstracto "imprimirInfo"
class ObjetoAbstracto {
protected:
    int id;

public:
    ObjetoAbstracto()
    {
        this->id = 0;
    }
    ObjetoAbstracto(int _id)
    {
        this->id = _id;
    }
    ObjetoAbstracto(const ObjetoAbstracto &oa)
    {
        this->id = oa.id;
    }
    virtual void imprimirInfo() const = 0;

    virtual ~ObjetoAbstracto() 
    {

    }
};

// Clase derivada 1: ClaseA
class ClaseA : public ObjetoAbstracto {
private:
    char* nombre;

public:
    ClaseA() : ObjetoAbstracto()
    {
        this->nombre = nullptr;
    }

    ClaseA(int _id, const char* _nombre) : ObjetoAbstracto(_id) {
        int length = strlen(_nombre);
        nombre = new char[length + 1];
        strcpy(nombre, _nombre);
    }

    ClaseA(const ClaseA &ca)
    {
        this->id = ca.id;
        int length = strlen(ca.nombre);
        nombre = new char[length + 1];
        strcpy(nombre, ca.nombre);
    }

    void imprimirInfo() const override {
        cout << "Soy un objeto de la clase ClaseA" << endl;
        cout << "ID: " << id << endl;
        cout << "Nombre: " << nombre << endl;
    }

    ~ClaseA() {
        delete[] nombre;
    }
};

// Clase Punto
class Punto {
private:
    int x;
    int y;

public:
    Punto()
    {
        this->x = 0;
        this->y = 0;
    }
    Punto(int _x, int _y)
    {
        this->x = _x;
        this->y = _y;
    }
    Punto(const Punto &p)
    {
        this->x = p.x;
        this->y = p.y;
    }
    int getX() 
    { 
        return x; 
    }
    void setX(int x)
    {
        this->x = x;
    }
    int getY()
    { 
        return y; 
    }
    void setY(int y)
    {
        this->y = y;
    }
    void imprimirInfo() const {
        cout << "Coordenadas del punto: (" << x << ", " << y << ")" << endl;
    }
};

// Clase derivada 2: ClaseB
class ClaseB : public ObjetoAbstracto {
private:
    float numero;
    Punto punto;
public:
    ClaseB() : ObjetoAbstracto() 
    {
        this->numero = 0.0;
        this->punto.setX(0);
        this->punto.setY(0);
    }

    ClaseB(int _id, float _numero, Punto punto) : ObjetoAbstracto(_id) 
    {
        this->numero = _numero;
        this->punto.setX(punto.getX());
        this->punto.setY(punto.getY());
    }

    void imprimirInfo() const override {
        cout << "Soy un objeto de la clase ClaseB" << endl;
        cout << "ID: " << id << endl;
        cout << "Numero: " << numero << endl;
        punto.imprimirInfo();
    }
};

int main() {
    // Crear objetos de las clases ClaseA y ClaseB
    ClaseA objetoA(1, "Objeto A");
    Punto punto(3, 4);
    ClaseB objetoB(2, 3.14, punto);

    // Crear un puntero de tipo ObjetoAbstracto
    ObjetoAbstracto* punteroObjeto;

    // Asignar el objetoA al puntero
    punteroObjeto = &objetoA;
    // Llamar al método imprimirInfo a través del puntero
    punteroObjeto->imprimirInfo();

    // Asignar el objetoB al puntero
    punteroObjeto = &objetoB;
    // Llamar al método imprimirInfo a través del puntero
    punteroObjeto->imprimirInfo();

    return 0;
}
