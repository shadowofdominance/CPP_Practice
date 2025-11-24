//Pointers Lesson 3
//Using pointers to access array elements in C++
#include <iostream>
using namespace std;

int main()
{

    int luckyNumbers[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter lucky number " << (i + 1) << ": ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(luckyNumbers + i) << " ";
    }

    return 0;
}