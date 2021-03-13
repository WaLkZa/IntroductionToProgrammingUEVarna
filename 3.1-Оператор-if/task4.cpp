#include <iostream>

using namespace std;

/*
4. Да се напише програма, която изчислява дължимия данък за лек автомобил. 
Въвежда се мощност на двигателя (kw) и възраст (в години) на автомобила. 
Данъкът да се пресмята по следните правила:
До 55 kw вкл. – 0.95 лв. за 1 kw;
Над 55 kw до 74 kw вкл. – 1.28 лв. за 1 kw;
Над 74 kw до 110 kw вкл. – 1.57 лв. за 1 kw;
Над 110 kw – 1.76 лв. за 1 kw;

В зависимост от възрастта на автомобила, 
данъкът се умножава със следните коефициенти:

Над 14 години – 1;
Над 5 до 14 години включително – 1.5;
До 5 години включително – 2.8;
*/

int main()
{
    int enginePower;
    int carAge;
    double tax;

    cin >> enginePower;
    cin >> carAge;

    if (enginePower <= 55)
    {
        tax = enginePower * 0.95;
    }
    else if (enginePower <= 74)
    {
        tax = enginePower * 1.28;
    }
    else if (enginePower <= 110)
    {
        tax = enginePower * 1.57;
    }
    else
    {
        tax = enginePower * 1.76;
    }

    if (carAge <= 5)
    {
        tax *= 2.8;
    }
    else if (carAge <= 14)
    {
        tax *= 1.5;
    }
    else
    {
        tax *= 1;
    }

    cout << "Tax due: " << tax << " lv." << endl;
}