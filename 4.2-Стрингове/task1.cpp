#include <iostream>

using namespace std;

/*
1. Да се напише програма, която декларира стринг до 19 символа,
чете го от клавиатурата, след което без да използва готова
функция (като например strlen) намира и извежда дължината му.
*/

int main()
{
    char inputString[20];
    int length = 0;

    cin >> inputString;

    for (int i = 0; inputString[i] != '\0'; i++)
    {
        length++;
    }

    cout << "String length: " << length << endl;
}