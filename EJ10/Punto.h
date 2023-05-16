#ifndef PUNTO_H
#define PUNTO_H

class Punto {
  protected:
    float x, y;

  public:
    Punto(float x = 0.0, float y = 0.0);

    virtual void visualizar();
};

#endif
