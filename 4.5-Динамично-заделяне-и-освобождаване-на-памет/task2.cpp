#include <iostream>

using namespace std;

/*
2. Да се напише програма, която чете от клавиатурата едно
цяло число n, след което създава динамичен масив с n числа
тип int, въвежда ги от клавиатурата, сортира ги и ги извежда
в низходящ ред.
*/

int my_comparator(const void *num1, const void *num2)
{
    return *(int *)num2 - *(int *)num1;
}

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

    qsort(inputNumbers, arrInputNumbersSize, sizeof(int), my_comparator);

    for (int i = 0; i < arrInputNumbersSize; i++)
    {
        cout << inputNumbers[i] << " ";
    }

    cout << endl;

    delete[] inputNumbers;
}