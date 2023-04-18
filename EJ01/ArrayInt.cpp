#include <iostream>
#include "ArrayInt.h"

using namespace containers;

ArrayInt::ArrayInt()
{
    this->array = nullptr;
    this->capacity = 0;
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

void ArrayInt::setValue (unsigned int index, int data)
{
    if (index < this->capacity)
    {
        array[index] = data;
    } else
    {
        throw std::out_of_range("Index out of range");
    }
}

int ArrayInt::getValue (unsigned int index)
{
    for(int i = 0; i<index; i++)
    {
        return this->array[i];
    }
}

void ArrayInt::setCapacity (unsigned int capacity)
{
    this->capacity = capacity;
}

unsigned int ArrayInt::getCapacity()
{
    return this->capacity;
}