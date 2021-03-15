#include <iostream>

using namespace std;

/*
1. Да се напише програма, която декларира структура с два
компонента за студент - факултетен номер и успех, както и масив
от 5 елемента от този вид. Данните за студентите да се въведат от
клавиатурата, след което студентите да се сортират и изведат низходящо
по успех.
*/

int main()
{
    struct student
    {
        int facultyNumber;
        float grade;
    } students[5];

    int numberOfStudents = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < numberOfStudents; i++)
    {
        cin >> students[i].facultyNumber;
        cin >> students[i].grade;
    }

    //bubble sort in descending order
    for (int i = numberOfStudents; i >= 0; i--)
    {
        for (int j = numberOfStudents; j > numberOfStudents - i; j--)
        {
            if (students[j].grade > students[j - 1].grade)
            {
                swap(students[j].grade, students[j - 1].grade);
                swap(students[j].facultyNumber, students[j - 1].facultyNumber);
            }
        }
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("%i %.2f\n", students[i].facultyNumber, students[i].grade);
    }
}