#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

/*
3. Да се напише програма, която декларира двумерен масив (матрица)
от 10x10 числа тип int. Масивът да се запълни със случайни
числа от 0 до 1000 и да се изведе на екрана в 10 реда по 10 колони.
Без да се използва спомагателен масив, а чрез размяна на елемнтите масивът
(матрицата) да се транспонира, т.е. редовете да станат колони и обратното.
Да се изведе транспонираният масив.
Забележка: Масивът в действителност трябва да се транспонира, а не само да се
изведе транспониран.
*/

int main()
{
    srand((unsigned)time(0));

    int matrix[10][10];
    int row, col, temp;
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(int);

    cout << "The matrix" << endl;
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < cols; col++)
        {
            matrix[row][col] = rand() % 1001;
            cout << matrix[row][col] << "\t";
        }

        cout << endl;
    }

    //transpose logic using the same matrix
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < row; col++)
        {
            temp = matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = temp;
        }
    }

    cout << "The transpose of the matrix is" << endl;
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < cols; col++)
        {
            cout << matrix[row][col] << "\t";
        }

        cout << endl;
    }
}