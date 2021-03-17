#include <iostream>

using namespace std;

/*
1. Да се напише потребителска функция, която итеративно да
намира и връща факториела на предадено като параметър число.
*/

long factorial(int n)
{
    long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int inputNumber;

    cin >> inputNumber;

    cout << inputNumber << "! = " << factorial(inputNumber) << endl;
}