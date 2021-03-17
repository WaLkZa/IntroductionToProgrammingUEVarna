#include <iostream>

using namespace std;

/*
1. Да се напише програма, която чете от клавиатурата едно
цяло число n, след което създава динамичен масив с n числа
тип int, въвежда ги от клавиатурата, намира и извежда тяхната
средноаритметична стойност, най-голямата и най-малката стойност.
*/

int main()
{
    int *inputNumbers;
    int arrInputNumbersSize;

    cin >> arrInputNumbersSize;

    inputNumbers = new int[arrInputNumbersSize];

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        cin >> inputNumbers[i];
    }

    double sum = 0;
    int maxNum = inputNumbers[0];
    int minNum = inputNumbers[0];

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        sum += inputNumbers[i];

        if (inputNumbers[i] > maxNum)
        {
            maxNum = inputNumbers[i];
        }

        if (inputNumbers[i] < minNum)
        {
            minNum = inputNumbers[i];
        }
    }

    double average = sum / arrInputNumbersSize;

    cout << "Average: " << average << endl;
    cout << "Max number: " << maxNum << endl;
    cout << "Min number: " << minNum << endl;

    delete[] inputNumbers;
}