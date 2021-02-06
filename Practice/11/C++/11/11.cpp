#include <iostream>
#include <clocale>
using namespace std;
int64_t powerful(int a, int b)
{
	int64_t var = 1;
	int i = 0;

	while (i++ < b)
		var *= a;

	return var;
}

int main() {
	setlocale(LC_ALL, "Russian");

	int num, pow;
	cout << "Введите число: ";
	std::cin >> num;
	cout << "Введите степень: ";
	std::cin >> pow;
	std::cout << powerful(num, pow) << '\n';

	system("pause");
	return 0;

	return 0;

}