#include <iostream>

using namespace std;

/*
2. Да се напише програма, която прочита от клавиатурата едно цяло число,
пресмята и извежда неговия факториел.
*/

int main()
{
    int inputNumber;

    cin >> inputNumber;

    int fact = 1;

    do
    {
        fact *= inputNumber;
        inputNumber--;
    } while (inputNumber > 1);

    cout << fact << endl;
}