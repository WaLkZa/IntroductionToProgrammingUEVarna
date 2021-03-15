#include <iostream>

using namespace std;

/*
1. Да се напише програма, която декларира масив от 5 цели числа
тип int, въвежда ги от клавиатурата, намира и извежда тяхната
средноаритметична стойност, най-голямата и най-малката стойност.
*/

int main()
{
    int inputNumbers[5];
    int arrInputNumbersSize = sizeof(inputNumbers) / sizeof(inputNumbers[0]);

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        cin >> inputNumbers[i];
    }

    int sum = 0;
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
}