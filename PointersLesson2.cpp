// Pointers Lesson 2

#include <iostream>
using namespace std;

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

    printValueViaPointer(&number, 'i');
    printValueViaPointer(&letter, 'c');

    system("pause>0");
    return 0;
}