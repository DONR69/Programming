#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 3;
    b = 3.14;
    double c, d;
    c = 3;
    d = 3.14;
    cout << a << endl << b << endl << c << endl << d << endl;
    return 0;
}
// Тип int применяется к переменной a и b для целого числа, в переменной b не выводиться 3.14, потому что int применяется для целого числа
// Тип double применяется к переменной c и d для дробного числа
// Cout выводит в консоль результат, Endl перенос на другую строку