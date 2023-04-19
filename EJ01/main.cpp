#include <iostream>
#include "ArrayInt.h"

using namespace std;
using namespace containers;

int main()
{
    // Create an ArrayInt object
    ArrayInt myArray;

    // Test setValue function
    myArray.setValue(0, 10);
    myArray.setValue(1, 20);
    myArray.setValue(2, 30);

    // Test getValue function
    cout << "Value at index 0: " << myArray.getValue(0) << endl;
    cout << "Value at index 1: " << myArray.getValue(1) << endl;
    cout << "Value at index 2: " << myArray.getValue(2) << endl;

    // Test setCapacity function
    ArrayInt arrayCapacity = ArrayInt(5);
    arrayCapacity.setCapacity(4);

    // Test getCapacity function
    cout << "Array capacity: " << arrayCapacity.getCapacity() << endl;

    // Test setValue with out of range index
    myArray.setValue(10, 40);
    cout << "Value at index 10: " << myArray.getValue(10) << endl;

    // Test setCapacity with negative capacity
    ArrayInt arrayCapacityNegative;
    arrayCapacityNegative.setCapacity(-5);
    cout << "Array capacity: " << arrayCapacityNegative.getCapacity() << endl;

    return 0;
}
