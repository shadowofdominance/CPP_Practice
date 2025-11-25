#include <iostream>
using namespace std;

int main()
{
    // Initializing an array!
    float monthsArray[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the amount saved in month " << i + 1 << ": ";
        cin >> monthsArray[i];
    }

    return 0;
}   