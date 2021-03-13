#include <iostream>

using namespace std;

/*
1. Да се напише програма, която прочита цяло число от клавиатурата. 
Да се провери дали въведеното число е четно и ако е така, 
на екрана да се изведе "Yes", в противен случай да се изведе "No".
*/

int main()
{
    int inputNumber;
    
    cin >> inputNumber;

    if (inputNumber % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}