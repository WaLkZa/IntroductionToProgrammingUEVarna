#include <iostream>

using namespace std;

/*
3. Да се напише програма, която прочита от клавиатурата едно цяло число,
и ако то е просто, извежда "Yes", в противен случай - "No".
*/

int main()
{
    int inputNumber;

    cin >> inputNumber;

    bool isPrime = true;

    for (int i = 2; i <= sqrt(inputNumber); i++)
    {
        if (inputNumber % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}