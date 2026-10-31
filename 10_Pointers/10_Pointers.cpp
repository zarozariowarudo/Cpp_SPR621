#include <iostream>
using namespace std;

void ChangeVar(int* num)
{
	(*num)++;
}

void InitArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 50;
}

int* FindMaxInArr(int* arr, const int size)
{
	int* max = &arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > *max) *max = arr[i];
	}
	return max;
}

void ShowArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	srand(time(NULL) * 2 / 3);
	int a;

	int* pa = &a;

	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	cout << FindMaxInArr(arr, size);

	return 0;
}