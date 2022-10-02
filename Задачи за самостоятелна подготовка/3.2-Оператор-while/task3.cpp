#include <iostream>

using namespace std;

/*
3. Да се напише програма, която прочита от клавиатурата
две цели числа и извежда най-големия им общ делител,
например при въведени 25 и 30 - резултатът трябва да е 5.
*/

int main()
{
    int num1 = 25;
    int num2 = 30;
    
    while (num1 != num2)
    {

        //check if num1 > num2
        if (num1 > num2)
        {
            //Subtract num2 from num1
            num1 = num1 - num2;
        }
        else
        {
            //Subtract num1 from num2
            num2 = num2 - num1;
        }
    }

    cout << num1 << " " << num2;
}