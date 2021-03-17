#include <iostream>

using namespace std;

/*
2. Да се напише потребителска функция, която рекурсивно да
намира и връща факториела на предадено като параметър число.
*/

long factorial(int n)
{
    long fact;

    if (n == 1)
    {
        return 1;
    }

    fact = factorial(n - 1) * n;

    return fact;
}

int main()
{
    int inputNumber;

    cin >> inputNumber;

    cout << inputNumber << "! = " << factorial(inputNumber) << endl;
}