#ifndef POINT_H_
#define POINT_H_


class Point
{
    private:
        float x, y;
    public:
        Point(int x, int y);
        void suma1(Point p);
        void suma2(Point &p);
        void suma3(Point *p);
        Point getSuma(Point &p);
        void swap1(Point p);
        void swap2(Point &p);
        void swap3(Point *p);
        void print();

};


#endif