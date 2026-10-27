#include <iostream>
using namespace std;

void QuickSort(int arr[], const int size, int b, int e, bool reverse)
{
	int i = b, j = e;
	int temp, pivot;
	pivot = arr[(b + e) / 2];
	
	do
	{
		if (!reverse)
		{
			while (arr[i] < pivot) i++;
			while (arr[j] > pivot) j--;
		}
		else
		{
			while (arr[i] > pivot) i++;
			while (arr[j] < pivot) j--;
		}
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (b < j) QuickSort(arr, size, b, j, reverse);
	if (i < e) QuickSort(arr, size, i, e, reverse);
}

void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void QuickSort(int arr[], const int size, bool reverse = false)
{
	QuickSort(arr, size, 0, size - 1, reverse);
}

int main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
	
	cout << "Not sorted: " << endl;
	PrintArray(arr, size);
	cout << "Sorted: " << endl;
	QuickSort(arr, size);
	PrintArray(arr, size);
	cout << "Reverse sorted: " << endl;
	QuickSort(arr, size, true);
	PrintArray(arr, size);
	

	return 0;
}