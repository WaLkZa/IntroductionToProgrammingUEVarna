#include <iostream>

using namespace std;

/*
7. Да се декларира структура за студенти с компоненти:
име и среден успех, както и глобален масив от 5 студента.
Данните за 5-те студенти да се въведат от клавиатурата,
след което студентите (масивът) да се сортират и изведат
низходящо по среден успех.
*/

struct student
{
    char name[20];
    float grade;
} students[5];

int numberOfStudents = sizeof(students) / sizeof(students[0]);

int students_comparator(const void *s1, const void *s2)
{
    return (*(student *)s2).grade - (*(student *)s1).grade;
}

int main()
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        cin >> students[i].name;
        cin >> students[i].grade;
    }

    qsort(students, sizeof(students), sizeof(student), students_comparator);

    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("%i %.2f\n", students[i].name, students[i].grade);
    }
}