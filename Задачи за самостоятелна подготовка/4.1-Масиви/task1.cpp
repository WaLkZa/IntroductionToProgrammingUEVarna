#include <iostream>

using namespace std;

/*
1. Да се напише програма, която декларира масив от 5 числа
тип int, въвежда ги от клавиатурата, след което се въвежда
още едно число и програмата трябва да изведе "Yes", ако то
се среща във въведения масив или "No" - ако не се среща.
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
    cout << "Въведете число, което да се търси в масива: ";
    cin >> n;
    for (i = 0; i < 5; i++)
        if (a[i] == n)
            br++;
    if (br > 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}