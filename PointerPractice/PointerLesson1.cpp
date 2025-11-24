// Lesson 1 on Pointers in C++

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // Printing out the address of n without using a pointer
    cout << "Address of n: " << &n << endl;

    // Storing the address of n in a pointer variable
    int *ptr = &n;

    // Printing out the address stored in the pointer variable
    cout << "Value of ptr: " << ptr << endl;

    // Dereferencing the pointer to get the value at the address
    cout << "Value stored in the address: " << *ptr << endl;

    // Changing the value at the address using the pointer
    *ptr = 10;

    // Printing out the new value stored in the address
    cout << "Value stored in the address: " << *ptr << endl;
    cout << "Value of n: " << n << endl;

    return 0;
}