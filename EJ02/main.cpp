#include "Element.h"
#include <iostream>

using namespace std;
using namespace containers;


int main(void)
{
    Stack *stack;

    stack =  new Stack();

    for(int i = 0;i<10;i++)
    {
        stack->push(i);
    }
    cout << "La pila tiene " << stack->getSize() << " elementos" << endl;

	cout << "El primer elemento de la pila es " << stack->poll() << endl;
	
    while (stack->getSize() > 0)
		cout << stack->pop() << endl;

	cout << "La pila tiene " << stack->getSize() << " elementos" << endl;

	for (int i = 0; i < 1000; i++)
		stack->push(i);

	cout << "La pila tiene " << stack->getSize() << " elementos" << endl;

	stack->clear();
	cout << "La pila tiene " << stack->getSize() << " elementos" << endl;

	delete stack;

	cout << endl;
	cout << endl;

	
	return 0;


}