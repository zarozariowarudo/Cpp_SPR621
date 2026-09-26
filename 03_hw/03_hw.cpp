#include <iostream>

using namespace std;

void FirstTask()
{
	int i = 0;
	while (i++ < 100) cout << i << " ";	
	cout << endl;
}

void SecondTask()
{
	int i = 0;
	while (i++ < 200)
		if (i % 2 == 0) cout << i << " ";
	cout << endl;
}

void ThirdTask()
{
	int n;
	cout << "Enter N numbers: ";
	cin >> n;

	int i = 0;
	int resSum = 0;
	while (i++ < n)
		if (i % 2 == 0) resSum += i;
	cout << "Sum: " << resSum;
	cout << endl;
}

void FourthTask()
{
	int resSum = 0;

	int i = 0;
	while (i++ < 10)
	{
		int input;
		cout << "Enter " << i << " number: ";
		cin >> input;
		resSum += input;
	}
	cout << "Their sum: " << resSum << endl;
}

void FifthTask()
{
	int i = 100;
	do
	{
		cout << i-- << " ";
	} while (i != 0);
	cout << endl;
}

void SixthTask()
{
	int iterations;
	cout << "Enter number of numbers: ";
	cin >> iterations;
	int resSum = 0;
	int i = 1;
	do
	{
		int input;
		cout << "Enter " << i << " number: ";
		cin >> input;
		resSum += input;
	} while (i++ < iterations);
	cout << "Their sum: " << resSum << endl;
}

void SeventhTask()
{
	int hours = 12;
	int count = 0;
	
	for (int i = 1; i <= 12; i++)
		for (int g = 1; g <= i; g++) count += 1;

	cout << "Result: " << count << endl;
}

void EighthTask()
{
	int resSum = 0;
	for (;;)
	{
		int input;
		cout << "Enter number: (0 - stop): ";
		cin >> input;
		resSum += input;
		
		if (input == 0)
		{
			cout << "Their sum: " << resSum << endl;
			break;
		}
	}
}

int main()
{
	FirstTask();
	SecondTask();
	//ThirdTask();
	//FourthTask();
	FifthTask();
	//SixthTask();
	SeventhTask();
	EighthTask();

	return 0;
}