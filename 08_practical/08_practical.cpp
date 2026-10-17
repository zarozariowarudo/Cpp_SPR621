#include <iostream>
#include <iomanip>
using namespace std;

int Max(int a, int b)
{
	return (a > b) ? a : b;
}

double Max(double a, double b)
{
	return (a > b) ? a : b;
}

float Max(float a, float b)
{
	return (a > b) ? a : b;
}

int Max(int a, int b, int c)
{
	if (a > b) return a;
	else if (b > a) return b;
	else if (c > a) return c;
	else if (c > b) return c;
}

float Max(float a, float b, float c)
{
	if (a > b) return a;
	else if (b > a) return b;
	else if (c > a) return c;
	else if (c > b) return c;
}

double Max(double a, double b, double c)
{
	if (a > b) return a;
	else if (b > a) return b;
	else if (c > a) return c;
	else if (c > b) return c;
}

int Min(int a, int b)
{
	return (a < b) ? a : b;
}

double Min(double a, double b)
{
	return (a < b) ? a : b;
}

float Min(float a, float b)
{
	return (a < b) ? a : b;
}

int Min(int a, int b, int c)
{
	if (a < b && a < c) return a;
	else if (b < a && b < c) return b;
	else if (c < a && c < b) return c;
}

float Min(float a, float b, float c)
{
	if (a < b && a < c) return a;
	else if (b < a && b < c) return b;
	else if (c < a && c < b) return c;
}

double Min(double a, double b, double c)
{
	if (a < b && a < c) return a;
	else if (b < a && b < c) return b;
	else if (c < a && c < b) return c;
}

template <typename T>
T ArrAverage(T arr[], const int size)
{
	T av = 0;
	for (int i = 0; i < size; i++)
		av += arr[i];
	av /= size;
	return av;
}

template <typename T>
T ArrMax(T arr[], const int size)
{
	T max = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}

template <typename T, const int columns>
T ArrMax(T arr[][columns], const int rows)
{
	T max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; i < columns; j++)
			if (arr[i][j] > max) max = arr[i][j];
	}
	return max;
}

int randint(int start, int end)
{
	if (start == end) return start;
	if (start > end) return -1;
	if (end == 0) return -1;

	if (start > 0)
		return rand() % (end - start) + start;
	else
		return rand() % (end * 2) - abs(start);
}

template <typename T, const int columns>
void arrInitMaxMin(T arr[][columns], const int rows)
{
	// Initialization
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			arr[i][j] = randint(-20, 20);
	}
	
	// Showing
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << setw(5) << arr[i][j];
		cout << endl;
	}

	// Min & max
	T min = arr[0][0];
	T max = arr[0][0];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == j && arr[i][j] > max)
				max = arr[i][j];
			if (i == j && arr[i][j] < min)
				min = arr[i][j];
		}
	}
}

template <typename T>
void fillArr(T arr[], const int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = randint(-20, 20);
}

template <typename T, const int columns>
void fillArr(T arr[][columns], const int rows,
	int start = -20, int end = 20)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = randint(start, end);
		}
	}
}

int main()
{
	srand(time(NULL));

	const int size = 10;
	int arrI[size];
	fillArr(arrI, size);
	cout << "Max: " << ArrMax(arrI, size);

	float arrF[size];
	fillArr(arrF, size);
	cout << "Max: " << ArrMax(arrF, size);

	long arrL[size];
	fillArr(arrL, size);
	cout << "Max: " << ArrMax(arrL, size);

	const int rows = 10, columns = 5;
	int matrixI[rows][columns];
	fillArr(matrixI, rows, columns);
	cout << "Max: " << ArrMax(matrixI, rows);

	long long matrixLL[rows][columns];
	arrInitMaxMin(matrixLL, rows);
	
	return 0;
}
