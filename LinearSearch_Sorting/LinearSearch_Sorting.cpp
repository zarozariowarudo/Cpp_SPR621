#include <iostream>
using namespace std;

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int LinearSearch(int arr[], const int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return key;
	}
	return -1;
}

void SelectionSort(int arr[], const int size)
{
	int temp, index;

	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < temp)
			{
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}

void BubleSort(int arr[], const int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void ShakerSort(int arr[], const int size)
{
	int j, index = size - 1, temp;
	int left = 1;
	int right = size - 1;

	do
	{
		for (j = right; j >= left; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		left = index + 1;

		for (j = left; j <= right; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	} while (left < right);
}

void InsertSort(int arr[], const int size)
{
	int temp, j;
	for (int i = 0; i < size; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[i] > temp; j--)
		{
			arr[j + 1] = arr[i];
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	SelectionSort(arr, size);
	ShowArray(arr, size);
	//int search_key, index_search;
	//cout << "Enter search key: "; cin >> search_key;
	//index_search = LinearSearch(arr, size, search_key);

	//if (index_search != -1)
	//{
	//	cout << "Element: " << search_key << "found in arr" << endl;
	//}
	//else
	//	cout << "Not found";
	return 0;
}