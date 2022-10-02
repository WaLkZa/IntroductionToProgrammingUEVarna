#include <iostream>

using namespace std;

/*
2. Да се напише програма, която прочита от клавиатурата
две цели числа и изчислява първото число, повдигнато на степен
второто (без да използва готова функция).
*/

int main()
{
    int base, exponent;
    long power = 1;

    printf("Enter base and Exponent: ");
    scanf("%d %d", &base, &exponent);

    while (exponent != 0)
    {
        power *= base; //power= power  * base
        exponent--;
    }

    printf("Result = %ld\n", power);
}