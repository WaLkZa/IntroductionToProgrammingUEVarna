#include <stdio.h>

/*
2. Да се напише програма, която извежда с помощта на printf
числата 2.13 и 33.3 едно под друго, дясно подравнени и с два знака
след десетичната точка.
*/

int main()
{
    float firstNumber = 2.13;
    float secondNumber = 33.3;

    //дясно подравнени
    printf("%8.2f\n%8.2f\n", firstNumber, secondNumber);

    //ляво подравнени
    printf("%-8.2f\n%-8.2f", firstNumber, secondNumber);
}