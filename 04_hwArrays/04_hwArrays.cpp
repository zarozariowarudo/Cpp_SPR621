#include <iostream>

using namespace std;

void showArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
		cout << i + 1 << "num of arr: " << arr[i];
	cout << endl;
}

void showArray(long arr[], const int size)
{
	for (int i = 0; i < size; i++)
		cout << i + 1 << "num of arr: " << arr[i];
	cout << endl;
}

void firstTask()
{
	const int size = 10;
	int arr[size];

	int multiply = 1;

	for (int i = 0; i < size; i++)
	{
		int input;
		cout << "Enter " << i << " number of array: " << endl;
		cin >> input;
		multiply *= input;
	}
	showArray(arr, size);
	cout << "Their muliply is: " << multiply << endl;
}

void secondTask()
{
	const int size = 7;
	int arr[size] = { -10, 1, 2, -3, 5, 6, 7 };
	int countPos = 0, countNeg = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0) countPos += 1;
		else if (arr[i] < 0) countNeg += 1;
	}

	showArray(arr, size);
	cout << "There is " << countPos << " positives";
	cout << "There is " << countNeg << " negatives";
}

void ThirdTask()
{
	const int size = 7;
	long arr[size] = {1, 2, 3, -5, 4, 5, -3};
	int pairCount = 0;

	showArray(arr, size);

	for (int i = 0; i < size; i++)
		if (arr[i] % 2 == 0) pairCount += 1;

	cout << "There is " << pairCount << " pair nums";
}

void FourthTask()
{
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
		arr[i] = pow(2, i);

	showArray(arr, size);

	for (int i = size; i > 0; i--)
		cout << i + 1 << "num of arr: " << arr[i];
	cout << endl;
}

void FifthTask()
{
	const int size = 10;
	int arr[size] = { 1, 2, 3, 4, 5, -1, -2, -3, -4, -5 };

	for (int i = 0; i < size; i++)
		if (arr[i] < 0) arr[i] = arr[i] * -1;
}

int main()
{
	firstTask();
	secondTask();
	ThirdTask();
	FourthTask();
	FifthTask();

	return 0;
}