#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число" << endl;
    cin >> a;
    {
        if ((a < 2) || (a > pow(10, 9)))
            return(0);
    }
    for (int i = 2; i <= sqrt(a) + 1; i++)
    {
        if (a % i == 0)
        {
            cout << "Составное число";
            return 0;
        }
        else
            cout << "Простое число";
        return 0;
    }
}