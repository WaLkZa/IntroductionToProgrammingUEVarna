#include <iostream>

using namespace std;

/*
5. Да се напише потребителска функция, която приема като
параметри един стринг и един символ и връща колко пъти
символът се среща в стринга.
*/

int count_occurrences(string str, char chr)
{
    int charCounter = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == chr)
        {
            charCounter++;
        }
    }

    return charCounter;
}

int main()
{
    string inputString;
    char inputChar;

    cin >> inputString;
    cin >> inputChar;

    cout << "String: " << inputString << endl;
    cout << "Char: " << inputChar << endl;
    cout << "Occurrences: " << count_occurrences(inputString, inputChar) << endl;
}