#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

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

void showArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i];
	cout << endl;
}

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

int main()
{	
	srand(time(NULL)); // time(NULL) - від 01.01.1970 

	int a;
	a = rand(); //0...32000

	cout << a << endl;
	a = rand(); //0...32000

	cout << a << endl;
	a = rand(); //0...32000

	cout << randint(-20, 20) << endl;

	const int size = 10;
	int arr[size][size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			arr[i][j] = randint(10, 100);
	}

	showArr(*arr, size, size);
	
	return 0;
}