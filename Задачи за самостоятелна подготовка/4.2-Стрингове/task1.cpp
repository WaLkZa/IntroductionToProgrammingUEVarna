#include <iostream>
#include <string.h>

using namespace std;

/*
1. Да се напише програма, която декларира стринг до 19 
символа, чете го от клавиатурата, след което проверява
и извежда дали стрингът е симетричен спрямо средата си - "Yes"
ако е и "No" - ако не е.
*/

int main()
{
    char inputString[20];
    cin >> inputString;

    bool flag = false;

    int length = strlen(inputString);

    for (int i = 0; i < length; i++)
    {
        if (inputString[i] != inputString[length - i - 1])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}