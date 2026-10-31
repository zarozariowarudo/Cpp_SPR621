#include <iostream>
using namespace std;

void InitArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 50;
}

void firstTask()
{
	int a = 5, b = 3, c = 4;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	cout << "Mult: " << *pa * *pb * *pc << endl;
	cout << "Avg: " << (*pa + *pb + *pc) / 3 << endl;
	
	if (*pa < *pb && *pa < *pc) cout << "Min: " << *pa << endl;
	else if (*pb < *pa && *pb < *pc) cout << "Min: " << *pb << endl;
	else cout << "Min: " << *pc << endl;
}

void secondTask(int *arr, const int size, bool reversed = false)
{
	InitArray(arr, size);
	int start, step, end;
	(reversed) ? start = 0, step = 1, end = size - 1 
				: start = size - 1, step = -1, end = 0;

	for (start; start != end; start += step)
		cout << arr[start] << " ";
	cout << endl;
}

int main()
{
	firstTask();
	const int size = 10;
	int arr[size];
	secondTask(arr, size);
	secondTask(arr, size, false);

	return 0;
}