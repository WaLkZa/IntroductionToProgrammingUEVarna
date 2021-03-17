#include <iostream>
#include <cmath>

using namespace std;

/*
4. Да се напише програма, която прочита от клавиатурата едно цяло число,
и намира и извежда всички прости числа до въведеното включително.
*/

int main()
{
    int inputNumber;

    cin >> inputNumber;

    for (int currentNumber = 2; currentNumber <= inputNumber; currentNumber++)
    {
        bool isPrime = true;
        
        for (int j = 2; j <= sqrt(currentNumber); j++)
        {
            if (currentNumber % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << currentNumber << " ";
        }
    }

    cout << endl;
}