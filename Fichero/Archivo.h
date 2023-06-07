#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <string>

using namespace std;

class Archivo {
public:
    Archivo(const string& filename);

    bool escribir(const string& contenido);
    bool leer(string& contenido);

private:
    string filename;
};

#endif  // ARCHIVO_H
