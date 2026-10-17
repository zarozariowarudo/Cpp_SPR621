#include <iostream>
using namespace std;

void change(int a, int b)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	a += b;
	b = a - b;
	a -= b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void Foo(int k, int a = 1, int b = 2)
{
	cout << k << " " << a << " " << b << endl;
}
/*
// перезавантаження по типу даних
int maxEl(int arr[], const int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int maxEl(long arr[], const int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int maxEl(float arr[], const int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int maxEl(char arr[], const int size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

// перезавантаження по кількості аргументів
int multy(int a, int b)
{
	return a * b;
}

int multy(int a, int b, int c)
{
	return a * b * c;
}

int multy(int a, int b, int c, int z)
{
	return a * b * c * z
}
*/

template <typename T>
T maxEl(T arr[], const int size)
{
	T max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

template <typename T1, typename T2>
int Max(T1 a, T2 b)
{
	return (a > b) ? a : b;
}

int main()
{
	int x[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	long l[] = { 1l, 2l, 3l, 4l, 5l, 6l, 7l, 8l, 9l };
	float f[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f };
	char let[] = { 'd', 'y', 't', 'u', 'z', 'a', 'p' };

	cout << "Max element: " << maxEl(x, 8) << endl;
	cout << "Max element in long: " << maxEl(l, 8) << endl;
	cout << "Max element in float: " << maxEl(f, 6) << endl;
	cout << "Max element in char: " << maxEl(let, 6) << endl;

	//Foo(5, 9);
	//Foo(5);
	//Foo(1);

	//int a = 5, b = 6;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//change(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	return 0;
}