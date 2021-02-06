#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "Введите первое число ";
	cin >> a;
	cout << "Введите второе число ";
	cin >> b;
	c = a;
	a = b;
	b = c;

	cout << "\n Первое число " << a;
	cout << "\n Второе число " << b << endl;

	double d, e;
	cout << "Введите первое число ";
	cin >> d;
	cout << "Введите второе число ";
	cin >> e;
	d = e - d;
	e = e - d;
	d = e + d;

	cout << "\n Первое число " << d;
	cout << "\n Второе число " << e;
	return 0;
}