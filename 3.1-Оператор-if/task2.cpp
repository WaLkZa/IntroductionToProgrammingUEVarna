#include <iostream>

using namespace std;

/*
2. Да се напише програма, която прочита цяло число от клавиатурата. 
Да се провери дали въведеното число е в интервала от 1 до 7 или от 17 до 23 включително 
и ако е така, на екрана да се изведе "Yes", а в противен случай да се изведе "No".
*/

int main()
{
    int inputNumber;
    
    cin >> inputNumber;

    if ((inputNumber >= 1 && inputNumber <= 7) || (inputNumber >= 17 && inputNumber <= 23))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}