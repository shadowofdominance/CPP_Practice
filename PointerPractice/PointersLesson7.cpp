#include <iostream>
#include <vector>
using namespace std;

bool ascendingCompare(int a, int b)
{
    return a < b;
}
bool descendingCompare(int a, int b)
{
    return a > b;
}

void customSort(vector<int> &numbersVector, bool (*compFuncPtr)(int, int))
{
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
    {
        int bestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
        {
            if (compFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void printNumbers(vector<int> &numbersVector)
{
    for (int i = 0; i < numbersVector.size(); i++)
    {
        cout << numbersVector[i] << ' ';
    }
}
/* int add(int a, int b)
{
    return a + b;
} */
int main()
{
    /* int (*funcPtr)(int, int) = add;

    cout << funcPtr(5, 11) << endl;
    cout << funcPtr(3, 8) << endl; */

    vector<int> myNumbers = {1, 6, 3, 2, 5, 4};
    bool (*funcPtr)(int, int) = ascendingCompare;
    customSort(myNumbers, funcPtr);
    printNumbers(myNumbers);

    return 0;
}