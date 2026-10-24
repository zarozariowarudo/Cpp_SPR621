#include <iostream>
using namespace std;

void Foo(int a)
{
	if (a < 0) return;
	cout << "Hello" << a << endl;
	a--;
	Foo(a);
}

int summaRec(int arr[], const int size, int indx=0)
{
	if (indx == size - 1)
		return arr[indx];
	return arr[indx] + summaRec(arr, size, indx + 1);
}

void QuickSort(int arr[], const int size, int b, int e)
{
	int i = b, j = e;
	int temp, pivot;
	pivot = arr[(b + e) / 2];
	
	do
	{
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (b < j) QuickSort(arr, size, b, j);
	if (i < e) QuickSort(arr, size, i, e);
}

int BinarySearch(int arr[], int size, int key)
{
	int b = 0;
	int e = size - 1;
	while (1)
	{
		int p = (b + e) / 2;
		if (key > arr[p])
			b = p + 1;
		else if (key < arr[p])
			e = p - 1;
		else if (key == arr[p])
			return p;

		if (b > e) return -1;
	}
}

int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 };
	cout << summaRec(arr, size) << endl;
	return 0;
}