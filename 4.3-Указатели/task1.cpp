#include <iostream>

using namespace std;

/*
1. Да се напише програма, която декларира масив от 5
числа тип int, въвежда ги от клавиатурата, след което
с помощта на указател към масива да ги извежда.
*/

// Повече информация за указатели и масиви: https://referatite.org/ukazateli-i-masivi-ukazateli-na-ednomerni-masivi-ukazateli-na-dvumerni-masivi/15693/ref

int main()
{
    int inputNumbers[5];
    int arrInputNumbersSize = sizeof(inputNumbers) / sizeof(inputNumbers[0]);
    int *p = inputNumbers;

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        cin >> inputNumbers[i];
    }

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        // *(inputNumbers + i)
        cout << *p << " ";

        p++;
    }

    cout << endl;
}