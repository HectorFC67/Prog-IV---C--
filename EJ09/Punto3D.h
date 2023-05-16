#ifndef PUNTO3D_H
#define PUNTO3D_H

#include "Punto.h"

class Punto3D : public Punto {
  private:
    float z;

  public:
    Punto3D(float x = 0.0, float y = 0.0, float z = 0.0);

    void visualizar() override;

    Punto3D operator*(const Punto3D& other) const;

    void operator*(int escalar);
};

#endif
