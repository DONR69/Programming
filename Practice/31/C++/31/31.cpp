﻿#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

#define ПО_ЗНАЧЕНИЮ

using std::vector;
using std::ostream;

#ifdef ПО_ССЫЛКЕ
ostream& operator<<(ostream& os, const vector<int>& x) {
	os << x.size() << "\t| ";
	for (int i = 0; i < x.size(); i++) {
		os << &x[i];
		if (i + 1 < x.size())
			os << " ";
	}
	os << std::endl;
	return os;
}
#endif
#ifdef ПО_ЗНАЧЕНИЮ
ostream& operator<<(ostream& os, vector<int> x) {
	os << x.size() << "\t| ";
	for (int i = 0; i < x.size(); i++) {
		os << &(x[i]);
		if (i + 1 < x.size())
			os << " ";
	}
	os << std::endl;
	return os;
}
#endif

int main()
{
	vector<int> v;
	std::ofstream ofs("data.txt");
	/* Часть I
	   Вопрос 1.
	   Адреса первых элементов всегда разные, потому что при вызове оператора <<
	   весь вектор копируется в новую память
	   Адрес следующего элемента это адрес предыдущего + sizeof(int),
	   то есть все элементы распологаются сразу друг за другом */

	   /* Вопрос 2
		  Если запомнить адрес первого элемнента при длине 15 и попытаться его изменить
		  при длине 25, то 99.999999% шанс того, что первый элемент не изменится,
		  потому что весь массив был перемещён в новую память (читать далее в части III)
		  + место в памяти, когда вектор был 15 элементов
		  может быть слишком маленьким для вектора 25 элементов,
		  поэтому массив там не разместится
		  offtop | В языке Rust эта махинация запрещена, потому что вектор при его изменении
				 | может быть перемещён и адрес будет ссылаться на старое место. */
	for (int i = 0; i <= 63; i++) {
		v.push_back(1);
		ofs << v;
	}
	/* Part II
	   Вопрос 3.
	   Смотри ответ в вопросе 1 */
	while (v.size()) {
		v.pop_back();
		ofs << v;
	}
	// Part III
	/* Вопрос 4
	   Если оператор << принимает по значению, тогда вектор не копируется при вызове функции
	   Изменения с предыдущим выводом есть. Когда из вектора начинают убирать элементы,
	   адрес первого элемента остаётся одним и тем же.
	   При добавлении элементов адреса элементов всё так же псевдо случайны.

	   Вектор использует аллокацию памяти в куче. Для этой аллокации нужно знать размер аллоцируемых байт.

	   Количество аллоцированных байт является ёмкость вектора (capacity)
	   Причём, ёмкость != длина. Длина всегда будет меньше или равно ёмкости.
	   Получается, если длина меньше ёмкости, тогда некоторое аллоцированное место просто не используется

	   Вектор аллоцирует в памяти место для всех элементов.
	   Если в вектор добавить элемент, и длина вектора равна ёмкости,
	   Вектор аллоцирует новую память, с ёмкостью на sizeof(int) байт больше,
	   а потом копирует все элементы из предыдущей памяти в новую
	   и делает delete старой памяти.

	   В случае pop_back из вектора, аллоцировать новую память нет необходимости,
	   просто уменьшается длина вектора, ёмкость остаётся преждней
	   Именно поэтому адрес первого элемента остаётся одним и тем же */

}