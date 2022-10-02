#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

/*
2. Да се напише програма, която декларира стринг до 19 
символа, чете го от клавиатурата, след което го извежда
в обратен ред на символите (отзад - напред).
*/

int main()
{
    char inputString[20];

    gets(inputString);

    for (int i = strlen(inputString) - 1; i >= 0; i--)
    {
        cout << inputString[i];
    }
}