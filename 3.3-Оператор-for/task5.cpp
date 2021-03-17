#include <iostream>

using namespace std;

/*
5. Да се напише програма, която пресмята n-тото число от редицата на Фибоначи.
Редицата е 1, 1, 2, 3, 5, 8 и т.н. - всеки следващ член се получава от сумата
на предходните два. Например при въведено 6, резултатът трябва да е 8.
*/

int main()
{
    int inputNumber;

    cin >> inputNumber;

    int num1 = 1;
    int num2 = 1;

    for (int i = 1; i < inputNumber; i++)
    {
        int sumOfPrevTwo = num1 + num2;
        num1 = num2;
        num2 = sumOfPrevTwo;
    }

    cout << num1 << endl;
}