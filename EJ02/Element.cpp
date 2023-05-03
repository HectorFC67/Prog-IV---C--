#include "Element.h"


namespace containers
{
    Element::Element(int data)
    {
        this->data = data;
        this->next =    0;
    }
    int Element::getData() const
    {
        return data;
    }
    void Element::setNext(Element *e)
    {
        this->next = e;
    }
    Element* Element::getNext()const
    {
        return this->next;
    }
    Stack::Stack()
    {
        this->size = 0;
        first = nullptr;

    }
    Stack::~Stack()
    {
        clear();
    }   
    void Stack::push(int dato)
    {
        Element *e = new Element(dato);
        e->setNext(this->first);
        this->first = e;
        this->size++;

    }
    int Stack::pop()
    {
        Element *e = first;
        this->first = first->getNext();
        this->size--;

        int data = e->getData();
        delete e;

        return data;


    }
    int Stack::poll()
    {
        return this->first->getData();

    }
    void Stack::clear()
    {
        while(getSize() > 0)
        {
            pop();
        }
    }
    unsigned int Stack::getSize()
    {
        return this->size;
    }
    
}