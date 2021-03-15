#include <iostream>

using namespace std;

/*
2. Да се напише програма, която декларира стринг до 19 символа,
чете го от клавиатурата, чете още един символ и намира и извежда
колко пъти символът се съдържа в стринга.
*/

int main()
{
    char inputString[20];
    char inputChar;
    int charCounter = 0;

    cin >> inputString;
    cin >> inputChar;

    for (int i = 0; inputString[i] != '\0'; i++)
    {
        if (inputString[i] == inputChar)
        {
            charCounter++;
        }
    }

    cout << "String: " << inputString << endl;
    cout << "Char: " << inputChar << endl;
    cout << "Occurrences: " << charCounter << endl;
}