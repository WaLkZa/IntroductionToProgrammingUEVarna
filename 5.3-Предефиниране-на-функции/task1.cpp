#include <iostream>

using namespace std;

/*
1. Да се напише предефинирана потребителска функция, която 
да намира по-голямото от две цели или реални числа.
*/

int find_greatest(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

float find_greatest(float num1, float num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    cout << find_greatest(3, 40) << endl;
    cout << find_greatest(33.3f, 23.4f) << endl;
}