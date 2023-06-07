#ifndef MI_CLASE_H
#define MI_CLASE_H

class MiClase {
private:
    int variable1;
    char* variable2;

public:
    // Constructores
    MiClase();
    MiClase(int var1, const char* var2);
    MiClase(const MiClase& other); // Constructor de copia

    // Destructor
    ~MiClase();

    // Getters y Setters
    int getVariable1() const;
    void setVariable1(int var1);
    const char* getVariable2() const;
    void setVariable2(const char* var2);

    // Método para imprimir la información por consola
    void imprimirInformacion() const;
};

#endif
