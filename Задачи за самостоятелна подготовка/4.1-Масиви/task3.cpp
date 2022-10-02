#include <iostream>

using namespace std;

/*
3. Да се напише програма, която декларира масив от 5 числа
тип int, въвежда ги от клавиатурата и проверява дали
масивът е симетричен (например 1 3 2 3 1), при което да се
изведе "Yes" или "No".
*/

int main()
{
    setlocale(LC_ALL, "");
    int a[5], i, n, br = 0;

    for (i = 0; i < 5; i++)
    {
        cout << "Въведете число: ";
        cin >> a[i];
    }

    for (i = 0; i < 3; i++)
        if (a[i] != a[4 - i])
            br++;

    if (br == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}