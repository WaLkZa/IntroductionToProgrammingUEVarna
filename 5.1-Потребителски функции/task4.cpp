#include <iostream>

using namespace std;

/*
4. Да се напише потребителска функция - аналог на strlen,
която приема стринг с произволна големина и връща неговата
дължина.
*/

int custom_strlen(string str)
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    string inputString;

    cin >> inputString;

    cout << "String length: " << custom_strlen(inputString) << endl;
}