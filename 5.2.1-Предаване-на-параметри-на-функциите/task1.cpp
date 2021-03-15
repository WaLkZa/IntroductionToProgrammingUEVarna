#include <iostream>

using namespace std;

/*
1. Да се напише предефинирана потребителска функция, която 
чрез псевдоними да разменя стойностите на две предадени
променливи от тип int.
*/

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1 = 100;
    int num2 = 200;

    cout << "Before swap, value of num1 = " << num1 << endl;
    cout << "Before swap, value of num2 = " << num2 << endl;

    swap(num1, num2);

    cout << "After swap, value of num1 = " << num1 << endl;
    cout << "After swap, value of num2 = " << num2 << endl;
}