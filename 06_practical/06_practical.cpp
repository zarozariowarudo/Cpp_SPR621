#include <iostream>
#include <iomanip>

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

void task1()
{
	const int rows = 4;
	const int columns = 3;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);
	
	int counter = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] != 0) counter += 1;
		}
	}

	cout << "Counter: " << counter << endl;
}

void task2()
{
	const int rows = 3;
	const int columns = 3;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int counter = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] == 0) counter += 1;
		}
	}

	cout << "Counter: " << counter << endl;
}

void task3()
{
	const int rows = 7;
	const int columns = 3;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int counter = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (abs(arr[i][j]) < 12 ) counter += 1;
		}
	}

	cout << "Counter: " << counter << endl;

}

void task4()
{
	const int rows = 4;
	const int columns = 5;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int counter = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] > 0) counter += 1;
		}
	}

	cout << "Counter: " << counter << endl;

}

void task5()
{
	const int rows = 5;
	const int columns = 4;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int mult = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] > 0) mult += arr[i][j];
		}
	}

	cout << "Mult: " << mult << endl;
}

void task6()
{
	const int rows = 5;
	const int columns = 4;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int mult = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] < 0) mult += arr[i][j];
		}
	}

	cout << "Mult: " << mult << endl;
}

void task7()
{
	const int rows = 4;
	const int columns = 4;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int counter = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] % 6 == 1) counter += 1;
		}
	}

	cout << "Counter: " << counter << endl;
}

void task8()
{
	const int rows = 5;
	const int columns = 6;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int min = arr[0][0];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}

	cout << "Min: " << min << endl;
}

void task9()
{
	const int rows = 5;
	const int columns = 6;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int max = arr[0][0];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}

	cout << "Max: " << max << endl;
}

void task10()
{
	const int rows = 5;
	const int columns = 4;
	int arr[rows][columns];
	fillArr(*arr, rows, columns);

	int summ = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] < 0) summ += arr[i][j];
		}
	}

	cout << "Summ: " << summ << endl;

}

int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();
	task6();
	task7();
	task8();
	task9();
	task10();

	return 0;
}