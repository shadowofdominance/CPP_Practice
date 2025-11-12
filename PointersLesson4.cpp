#include <iostream>
using namespace std;

int getMinAndMax(int numbers[], int sizeOfTheArray, int *max, int *min)
{
    for (int i = 0; i < sizeOfTheArray; i++)
    {
        if (numbers[i] > *max)
            *max = numbers[i];
        if (numbers[i] < *min)
            *min = numbers[i];
    }
}
int main()
{
    int numbers[5] = {5, -4, 2, 8, 20};

    int max = numbers[0];
    int min = numbers[0];

    getMinAndMax(numbers, 5, &max, &min);
    cout << "The maximum is --> " << max << endl;
    cout << "The minimum is --> " << min << endl;
    // cout << "The maximum is --> " << getMax(numbers, 5) << endl;
    // cout << "The minimum is --> " << getMin(numbers, 5) << endl;
    return 0;
}