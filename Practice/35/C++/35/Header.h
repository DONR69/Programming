#pragma once

struct IntArray {
	int* data;
	int size;
};

/** Создаёт динамический массив размера size и сохраняет его */
void create(IntArray* arr, int size);
void create(IntArray& arr, int size);

/** Возвращает элемент массива с индексом index, при этом проверяет */
int get(IntArray* arr, int index);
int get(IntArray& arr, int index);

/** Изменяет значение элемента массива с индексом index на значение */
void set(IntArray* arr, int index, int value);
void set(IntArray& arr, int index, int value);

/** Выводит на экран содержимое массива в формате: [1, 2, 3, 4] */
void print(IntArray* arr);
void print(IntArray& arr);

/** Изменяет размер массива с сохранением элементов. Если новый размер меньше, */
void resize(IntArray* arr, int newSize);
void resize(IntArray& arr, int newSize);

/** Освобождает память занятую массивом. Поле data становится равным nullptr, */
void destroy(IntArray* arr);
void destroy(IntArray& arr);