#include <stdio.h>

/*
1. Да се напише програма, която прочита число от клавиатурата
(да се въвежда стойност от 0 до 255) и да показва символа,
чийто ASCII код е въведеното число.
*/

int main()
{
    int inputNumber;
    
    scanf("%i", &inputNumber);

    printf("\n%i = %c", inputNumber, inputNumber);
}