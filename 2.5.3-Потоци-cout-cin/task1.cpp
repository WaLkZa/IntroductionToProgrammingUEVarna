#include <iostream>

using namespace std;

/*
1. Да се напише програма, която въвежда от клавиатурата
едно число тип int и след това го извежда в шестнадесетичен формат.
*/

int main()
{
    int inputNumber;
    
    cin >> inputNumber;

    cout << "0x" << hex << inputNumber << endl;
}