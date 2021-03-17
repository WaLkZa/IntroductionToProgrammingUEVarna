#include <iostream>

using namespace std;

/*
3. Да се напише програма, която прочита от клавиатурата едно цяло число,
намира и извежда всички точни делители на въведеното число.
*/

int main()
{
    int inputNumber;

    cin >> inputNumber;

    int i = 1;

    while (i <= inputNumber)
    {
        if (inputNumber % i == 0)
        {
            cout << i << " ";
        }
        
        i++;
    }
}