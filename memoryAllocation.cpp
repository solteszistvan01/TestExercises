#include <iostream>
#include "memoryAllocation.h"
using namespace std;
void memoryAllocation(){
//Declaration of variables.
    cout << "##########\nmemoryAllocation\n\n";
    int* element;
    element = new int;
    *element = 10;
    cout << "Value of the content of element, of element, and of the successor of element\n";
    cout << *element << "\n";
    cout << element << "\n";
    cout << (element+1) << "\n";
    //Type of element and it's content.
    cout << "Type of element and it's content:" << '\n';
    cout << typeid(element).name() << "\n";
    cout << typeid(*element).name() << "\n";
    // Assumption : P denotes the word "pointer to", i denotes integer.
    //Type of the address of element.
    cout << typeid(&element).name() << "\n";

    cout << "Type of an array containing integers" << "\n";
    int intList[] = {1,2,3,4,5,10};
    cout << typeid(intList).name() << "\n";
    cout << "Conclusion:\n" << "Arrays are shown to have a different type than pointers\n";
    cout << "##########\n";
}