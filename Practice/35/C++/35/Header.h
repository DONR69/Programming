#pragma once

struct IntArray {
	int* data;
	int size;
};

/** ������ ������������ ������ ������� size � ��������� ��� */
void create(IntArray* arr, int size);
void create(IntArray& arr, int size);

/** ���������� ������� ������� � �������� index, ��� ���� ��������� */
int get(IntArray* arr, int index);
int get(IntArray& arr, int index);

/** �������� �������� �������� ������� � �������� index �� �������� */
void set(IntArray* arr, int index, int value);
void set(IntArray& arr, int index, int value);

/** ������� �� ����� ���������� ������� � �������: [1, 2, 3, 4] */
void print(IntArray* arr);
void print(IntArray& arr);

/** �������� ������ ������� � ����������� ���������. ���� ����� ������ ������, */
void resize(IntArray* arr, int newSize);
void resize(IntArray& arr, int newSize);

/** ����������� ������ ������� ��������. ���� data ���������� ������ nullptr, */
void destroy(IntArray* arr);
void destroy(IntArray& arr);