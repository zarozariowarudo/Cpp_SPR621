#include <iostream>
using namespace std;

void InitArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 50;
}

int* FindMaxInArr(int* arr, const int size, bool min = false)
{
	int* el = &arr[0];
	for (int i = 1; i < size; i++)
	{
		if (!min)
		{
			if (*el < arr[i]) el = &arr[i];
		}
		else
		{
			if (*el > arr[i]) el = &arr[i];
		}
	}
	return el;
}

void ShowArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void FirstTask(int *arr, const int size)
{
	ShowArray(arr, size);
	int* max = FindMaxInArr(arr, size);
	int* min = FindMaxInArr(arr, size, true);
	cout << "Max el: " << *max  << endl;
	cout << "Min el: " << *min  << endl;
	int temp = *min;
	*min = *max;
	*max = temp;
	ShowArray(arr, size);
}

void SecondTask(int* arr, const int size)
{
	ShowArray(arr, size);

	for (int i = 0; i < size; i += 2)
	{
		int temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = temp;
	}

	ShowArray(arr, size);
}

int main()
{
	srand(time(NULL) * 3 / 10);

	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	FirstTask(arr, size);
	SecondTask(arr, size);

	return 0;
}