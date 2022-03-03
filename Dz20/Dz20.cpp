#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void showArr(int arr[], int length);
int searchIndex(int arr[], int length, int begin = 0);
int searchLastIndex(int arr[], int length, int begin = 0);
int maxElement(int arr[], int length);
int minElement(int arr[], int length);
int meanValue(int arr[], double length);
void range(int arr[], int N, int M);
int counter(int arr[], int length, int num);


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	srand(time(NULL));

	//Задача 1
	cout << "Задача 1\n";
	int arr[100];
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % (100 - (-100) + 1) - 100;
	//showArr
	showArr(arr, 100);
	//searchIndex
	cout << "Введите число(поиск с начала): ";
	cin >> n;
	cout << "Индекс этого числа: " << searchIndex(arr, 100, n) << "\n\n";
	//searchLastIndex
	cout << "Введите число(поиск с конца): ";
	cin >> n;
	cout << "Индекс этого числа: " << searchLastIndex(arr, 100, n) << "\n\n";
	//maxElement
	cout << "Максимальный элемент массива: " << maxElement(arr, 100) << "\n\n";
	//minElement
	cout << "Минимальный элемент массива: " << minElement(arr, 100) << "\n\n";
	//meanValue
	cout << "Среднее арифметическое всех элементов массива: " << meanValue(arr, 100) << "\n\n";
	//range
	cout << "Введите начало диапазона: ";
	cin >> n;
	cout << "Введите конец диапазона: ";
	cin >> m;
	range(arr, n, m);
	//counter
	cout << "Введите число: ";
	cin >> n;
	cout << "Это число встречаеься: " << counter(arr, 100, n) << " раз/а.\n\n";


	return 0;
}

int counter(int arr[], int length, int num) {
	int count = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] == num)
			count++;
	return count;
}

void range(int arr[], int N, int M) {
	cout << "Конечный массив:\n[";
		for (int i = N; i < M; i++)
			cout << arr[i] << ", ";
	cout << "\b\b]\n\n";
}

int meanValue(int arr[], double length) {
	double sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return sum / length;
}

int minElement(int arr[], int length) {
	int min = arr[0];
	for (int i = 0; i < length; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}

int maxElement(int arr[], int length) {
	int max = arr[0];
	for (int i = 0; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int searchLastIndex(int arr[], int length, int begin) {
	for(int i = length -1; i >= 0; i--)
		if (arr[i] == begin)
			return i;
	return -1;
}

int searchIndex(int arr[], int length, int begin) {
	for (int i = 0; i < length; i++)
		if (arr[i] == begin)
			return i;
	return -1;
}

void showArr(int arr[], int length) {
	cout << "Исходный массив:\n[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n\n";
}