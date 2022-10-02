#include <iostream>

using namespace std;

/*
2. Да се напише потребителска функция, която приема
като параметър едно цяло число n и връща като резултат
сумата на редицата 1/n + 1/2n + 1/3n + .... + 1/n.n

*/

float sum_of_a_sequence(int n)
{
    float sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (float)1 / (i * n);
    }

    return sum;
}

int main()
{
    int n;

    cin >> n;

    cout << "Sum is: " << sum_of_a_sequence(n) << endl;
}
