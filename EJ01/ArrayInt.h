#ifndef ARRAY_INT_H
#define ARRAY_INT_H

namespace containers {
    // a esta altura van todas las variables, funciones, clases
    class ArrayInt {
        private:
            unsigned int capacity;
            int *array;
        public:
            ArrayInt(); 
            ArrayInt(unsigned int capacity);
            ~ArrayInt();
        
            void setValue (unsigned int index, int data);
            int getValue (unsigned int index);
            void setCapacity (unsigned int capacity);
            unsigned int getCapacity();
    };
}

#endif ARRAY_INT_H