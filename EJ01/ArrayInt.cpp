#include <iostream>
#include "ArrayInt.h"
#define DEFAULT_CAPACITY 10

namespace containers{

    ArrayInt::ArrayInt()
    {
        this->capacity = DEFAULT_CAPACITY;
        this->array = new int[DEFAULT_CAPACITY];
    }

    ArrayInt::ArrayInt(unsigned int capacity)
    {
        this->capacity = capacity;
        this->array = new int[capacity];
    }
    // Destructor
    ArrayInt::~ArrayInt()
    {
        delete[] array;
    }

    void ArrayInt::setValue (unsigned int index, int data)
    {
        if(index < this->capacity && index >= 0)
        {
            this->array[index] = data;
        }else{
            //throw std::out_of_range("Index out of range");
            this->array[index] = -89374827849127489712;
        }
    }

    int ArrayInt::getValue (unsigned int index)
    {
        return this->array[index];
    }

    void ArrayInt::setCapacity (unsigned int capacity)
    {
        if(capacity<0)
        {
            this->capacity = capacity;
            
        }else
        {
            //throw std::out_of_range("Capacity out of range");
            this->capacity = -89374827849127489712;
        }
        
    }

    unsigned int ArrayInt::getCapacity()
    {
        return this->capacity;
    }
}