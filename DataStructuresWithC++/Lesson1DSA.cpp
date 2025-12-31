#include <iostream>
using namespace std;

int main()
{
    // Initializing an array!
    float monthsArray[6];
    float total = 0;
    float average = 0; 

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the amount saved in month " << i + 1 << ": ";
        cin >> monthsArray[i];
        total += monthsArray[i];
    }

    average = total / 6;

    cout << "The total savings are: " << total << endl;
    cout << "The average savings are: " << average << endl;

    return 0;
}   