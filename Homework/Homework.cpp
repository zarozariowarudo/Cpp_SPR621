#include <iostream>
using namespace std;

void drawRectangle(int N, int K)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
			cout << "*";
	}
	cout << endl;
}

int Factorial(int number)
{
	int res = 1;
	for (int i = 1; i <= number; i++)
	{
		res *= i;
	}
	return res;
}

bool isSimple(int number)
{
	if (number <= 1) return false;
	for (int i = 2; i < (number - 1); i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

void CheckArray(int arr[], const int size)
{
	if (size <= 0) return;
	int minN = arr[0];
	int maxN = arr[0];
	
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > maxN) maxN = arr[i];
		else if (arr[i] < minN) minN = arr[i];
	}

	cout << "Min el: " << minN << endl;
	cout << "Max el: " << maxN << endl;
}

int cube(int number)
{
	return number * number * number;
}

bool isPositive(int number)
{
	if (number >= 0) return true;
	else return false;
}

int main()
{

	return 0;
}