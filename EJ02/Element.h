#ifndef ELEMENT_H_
#define ELEMENT_H_

namespace containers
{
    class Element
    {
        private:
            int data;
            Element *next;
        public:
            Element(int data);

            int getData() const;
            void setNext(Element *e);
            Element *getNext() const;
    };

    class Stack
    {
        private:
            Element *first;
            unsigned int size;
        
        public:
            Stack();
            ~Stack();

            void push(int dato);
            int pop();
            int poll();
            void clear();

            unsigned int getSize();   

    };
}













#endif