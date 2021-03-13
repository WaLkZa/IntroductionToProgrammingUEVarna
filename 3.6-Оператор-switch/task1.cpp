#include <iostream>

using namespace std;

/*
1. Да се напише програма, която въвежда от клавиатурата
едно цяло число, което се тълкува като месец от годината,
след което извежда какъв сезон е месецът, например 7 - лято.
*/

int main()
{
    int inputMonth;

    cin >> inputMonth;

    switch (inputMonth)
    {
    case 1:
    case 2:
    case 12:
        cout << "Winter" << endl;
        break;
    case 3:
    case 4:
    case 5:
        cout << "Spring" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << "Аutumn" << endl;
        break;
    default:
        cout << "Invalid season!" << endl;
        break;
    }
}