#ifndef ARRAYINT_H
#define ARRAYINT_H

namespace containers {
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

#endif ARRAYINT_H