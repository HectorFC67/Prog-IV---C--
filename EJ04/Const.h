#ifndef CONST_H_
#define CONST_H_

class Point
{
    private:
        float x, y;
    public:
        Point(int x, int y);
        void setX(float x);
        void setY(float y);
        float getX() const;
        float getY() const;
        void sumar(const Point &p);
};







#endif