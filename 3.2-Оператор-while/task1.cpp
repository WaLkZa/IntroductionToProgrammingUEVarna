#include <iostream>

using namespace std;

/*
1. Да се напише програма, която прочита от клавиатурата две цели числата
и намира сумата на всички числа от едното до другото. 
*/

int main()
{
    int inputNumber;
    int inputSecondNumber;

    cin >> inputNumber;
    cin >> inputSecondNumber;

    int sum = 0;

    cout << "Sum between " << inputNumber << " and " << inputSecondNumber;

    do
    {
        sum += inputNumber;
        inputNumber++;
    } while (inputNumber <= inputSecondNumber);

    cout << " is " << sum << endl;
}