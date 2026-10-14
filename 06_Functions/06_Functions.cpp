#include <iostream>
#include <iomanip>
using namespace std;

int randint(int start, int end);

void showArr(int *arr, const int rows, const int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << setw(5) << arr[i*columns + j] << " ";
		cout << endl;
	}
	cout << endl;
}

void fillArr(int* arr, const int rows, const int columns,
				int start=-20, int end=20)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i * columns + j] = randint(start, end);
		}
	}
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

void DoSmtgWithArr(int* arr, const int rows, const int columns,
	void (*yourFunction)(int))
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			yourFunction(arr[i * columns + j]);
		}
	}
}

void countNegatives(int el)
{
	static int counter = 0;
	if (el < 0) counter++;
}

int main()
{
	const int size = 10;
	int arr[size][size];
	fillArr(*arr, size, size);
	showArr(*arr, size, size);
	DoSmtgWithArr(*arr, size, size, countNegatives);

	return 0;
}