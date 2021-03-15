#include <iostream>

using namespace std;

/*
2. Да се напише програма, която декларира масив от 5 числа
тип int, въвежда ги от клавиатурата, сортира ги и ги извежда
в низходящ ред.
*/

int main()
{
    int inputNumbers[5];
    int arrInputNumbersSize = sizeof(inputNumbers) / sizeof(inputNumbers[0]);

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        cin >> inputNumbers[i];
    }

    //bubble sort in descending order
    for (int i = arrInputNumbersSize; i >= 0; i--)
    {
        for (int j = arrInputNumbersSize; j > arrInputNumbersSize - i; j--)
        {
            if (inputNumbers[j] > inputNumbers[j - 1])
            {
                swap(inputNumbers[j], inputNumbers[j - 1]);
            }
        }
    }

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        cout << inputNumbers[i] << " ";
    }

    cout << endl;
}