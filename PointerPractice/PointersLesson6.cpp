#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the number of rows and columns" << endl;
    cin >> rows >> columns;

    int **table = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[columns];
    }

    table[1][2] = 88;

    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }

    delete[] table;
    table = NULL;

    return 0;
}