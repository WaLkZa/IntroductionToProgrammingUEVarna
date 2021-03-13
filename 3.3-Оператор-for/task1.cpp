#include <iostream>

using namespace std;

/*
1. Да се напише програма, която извежда с помощта на for цикъл
и printf буквите от латинската азбука от a до z.
*/

int main()
{
    for (char letter = 'a'; letter <= 'z'; letter++)
    {
        printf("%c ", letter);
    }
}