#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите первую переменную ";
	cin >> a;
	cout << "Введите вторую переменную ";
	cin >> b;
	cout << "\nСумма равна " << a + b;
	cout << "\nРазность равна " << a - b;
	cout << "\nПроизведение равно " << a * b;
	cout << "\nЧастное равно " << a / b << endl;

	double c, d;
	cout << "Введите первую переменную ";
	cin >> c;
	cout << "Введите вторую переменную ";
	cin >> d;
	cout << "\nСумма равна " << c + d;
	cout << "\nРазность равна " << c - d;
	cout << "\nПроизведение равно " << c * d;
	cout << "\nЧастное равно " << c / d << endl;

	int e;
	double f;
	cout << "Введите первую переменную ";
	cin >> e;
	cout << "Введите вторую переменную ";
	cin >> f;
	cout << "\nСумма равна " << e + f;
	cout << "\nРазность равна " << e - f;
	cout << "\nПроизведение равно " << e * f;
	cout << "\nЧастное равно " << e / f << endl;

	double g;
	int h;
	cout << "Введите первую переменную ";
	cin >> g;
	cout << "Введите вторую переменную ";
	cin >> h;
	cout << "\nСумма равна " << g + h;
	cout << "\nРазность равна " << g - h;
	cout << "\nПроизведение равно " << g * h;
	cout << "\nЧастное равно " << g / h;
	return 0;
}