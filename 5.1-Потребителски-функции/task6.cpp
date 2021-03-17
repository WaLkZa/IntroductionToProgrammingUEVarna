#include <iostream>
#include <cstring>

using namespace std;

/*
6. Да се декларира структура за фирма с компоненти: име,
булстат и адрес, както и глобален масив от 20 фирми.
Да се създаде програмно меню със следните опции:
добавяне на нова фирма, списък на всички фирми,
търсене на фирма по булстат и изход. Всяка опция
да се реализира чрез самостоятелна потребителска функция.
*/

#define MAX_COMPANIES 20

struct company
{
    char name[20];
    char bulstat[11];
    char address[20];
} companies[MAX_COMPANIES];

int countCompanies = 0;

void add_new_company()
{
    if (countCompanies == MAX_COMPANIES)
    {
        cout << "You have reached the maximum number of companies that can be added." << endl;
        return;
    }

    cout << "Type a company name: ";
    cin >> companies[countCompanies].name;

    cout << "Type a bulstat: ";
    cin >> companies[countCompanies].bulstat;

    countCompanies++;

    cout << endl;
}

void list_all_companies()
{
    for (int i = 0; i < countCompanies; i++)
    {
        cout << i + 1 << " " << companies[i].name << " " << companies[i].bulstat << endl;
    }
}

void search_company()
{
    char inputBulstat[11];

    cout << "Type bulstat for searching: ";
    cin >> inputBulstat;

    for (int i = 0; i < countCompanies; i++)
    {
        if (!strcmp(inputBulstat, companies[i].bulstat))
        {
            cout << companies[i].name << " " << companies[i].bulstat << endl;
            break;
        }
    }
}

int main()
{
    int menuOptions = 0;

    do
    {
        cout << "Choose option:\n1. Add a company\n2. List of all companies\n3. Search by bulstat\n4. Exit\n\n";

        cin >> menuOptions;

        switch (menuOptions)
        {
        case 1:
            add_new_company();
            break;
        case 2:
            list_all_companies();
            break;
        case 3:
            search_company();
            break;
        }

        cout << endl;
    } while (menuOptions != 4);
}