#include <iostream>
using namespace std;

void FirstTask()
{
	int i = 14;

	while (i <= 123)
		cout << "Number: " << i++ << " ";
	cout << endl;
}

void SecondTask()
{
	int i = -100;

	while (i < 100)
	{
		if (i > 0 && i % 2 != 0)
			cout << "Num: " << i << " ";
		i++;
	}
	cout << endl;
}

void ThirdTask()
{
	int num;
	int count = 0;
	cout << "Enter numbers a bit (CTRL + Z - stop, then Enter (Win)"; 
	cout << "(CTRL + C on Linux)" << endl;
	while (cin >> num)
		if (num < 0) count += 1;
	cout << "There is " << count << " negatives" << endl;
}

void FourthTask()
{
	int mult = 0, average = 0, num;

	for (int i = 0; i < 8; i++)
	{
		cout << "Enter " << i + 1 << "number: ";
		cin >> num;
		mult *= num;
		average += num;
	}
	average /= 8;

	cout << "Average: " << average << endl;
	cout << "Multiply result: " << mult << endl;
}

void FifthTask()
{
	int i = 100;
	do
	{
		if (i % 2 == 0)
			cout << i << " ";
	} while (i-- > 1);
	cout << endl;
}

void SixthTask()
{
	int i = 0, mult = 1, num;
	do
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> num;
		mult *= num;
	} while (++i < 5);
	cout << "Mult result: " << mult << endl;
}

int main()
{
	FirstTask();
	SecondTask();
	//ThirdTask();
	//FourthTask();
	FifthTask();
	SixthTask();

	return 0;
}