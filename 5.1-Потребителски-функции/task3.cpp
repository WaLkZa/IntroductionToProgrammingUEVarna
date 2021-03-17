#include <iostream>

using namespace std;

/*
3. Да се напише потребителска функция, която рекурсивно да
намира и връща n-тото число на Фибоначи (n се предава като параметър).
*/

long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int inputNumber;

    cin >> inputNumber;

    cout << inputNumber << " fibonacci = " << fibonacci(inputNumber) << endl;
}