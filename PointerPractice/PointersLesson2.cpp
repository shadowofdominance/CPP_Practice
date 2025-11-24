// Pointers Lesson 2
// Everything to know about void pointers in C++

#include <iostream>
using namespace std;

// Function to print value via void pointer
void printValueViaPointer(void *ptr, char dataType)
{
    switch (dataType)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    }
}
int main()
{

    int number = 5;
    char letter = 'b';

    // Calling function to print values using void pointers
    printValueViaPointer(&number, 'i');
    printValueViaPointer(&letter, 'c');

    system("pause>0");
    return 0;
}