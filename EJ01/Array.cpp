#include "Array.h"
#include <limits.h>

#define CONST 10




namespace containers
{
    ArrayInt::ArrayInt()
    {
        this->capacity = CONST;
        array = new int[this->capacity];

    }
    
    ArrayInt::ArrayInt(unsigned int capacity)
    {   
        this->capacity = capacity;
        array = new int[capacity];

    }
    ArrayInt::~ArrayInt()
    {
        delete[] array;
    }

    void ArrayInt::setValue(unsigned int index, int data)
    {
        if(index < this->capacity)
        {
            array[index] = data;
        }
    }
    int ArrayInt::getValue(unsigned int index)
    {
        return array[index];
    }
    void ArrayInt::setCapacity(unsigned int capacity)
    {
        int *prevArray = this->array;
        unsigned int prevCapacity = this->capacity;

        this->capacity = capacity;
        this->array = new int[this->capacity];

        unsigned int counter = 0;

        while(counter< prevCapacity && counter < capacity)
        {
            this->array[counter] =  prevArray[counter];
            counter++;
        }
        delete[] prevArray;

       
    }
    unsigned int ArrayInt::getCapacity()
    {
        return this->capacity;
    }
}
