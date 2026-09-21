#include <iostream>

using namespace std;

void FirstTask()
{
    int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	if (num1 != num2)
	{
		int temp;
		temp = num2;
		num2 = num1;
		num1 = temp;
	}
	else
	{
		cout << "Everything is good";
	}
}

void SecondTask()
{
	int num;

	cout << "Enter number: ";

	while ((cin >> num) && (num < 100 || num > 999))
		cout << "Invalid num. Enter again: ";
	
	int digital1 = (num / 100) % 10;
	int digital2 = (num / 10) % 10;
	int digital3 = num % 10;

	cout << "First dig: " << digital1 << endl;
	cout << "Second dig: " << digital2 << endl;
	cout << "Third dig: " << digital3 << endl;
}

void ThirdTask()
{
	int hour, minute, second;

	cout << "Enter hours: "; cin >> hour;
	cout << "Enter minutes: "; cin >> minute;
	cout << "Enter seconds: "; cin >> second;

	if (hour < 0 || hour >= 24)
		cout << "Incorrect hours !!!";	
	else if (minute < 0 || minute >= 0)
		cout << "Incorrect minutes !!!";
	else if (second < 0 || second >= 0)
		cout << "Incorrect seconds !!!";
}

void FourthTask()
{
	int hour;

	cout << "Enter hour : ";
	cin >> hour;

	if (hour >= 6 && hour <= 11)
		cout << "Good morning";
	else if (hour > 11 && hour <= 18)
		cout << "Good day";
	else if (hour > 18 && hour <= 21)
		cout << "Good evening";
	else if ((hour > 21 && hour < 24) && (hour <= 6 && hour >= 0))
		cout << "Good night";
}

void FifthTask()
{
	int num1, num2, num3;

	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	cout << "Enter num3: ";
	cin >> num3;

	if (num1 <= num2 && num1 <= num3)
		cout << "Minimal is: " << num1;
	if (num2 <= num1 && num2 <= num3)
		cout << "Minimal is: " << num2;
	if (num3 <= num2 && num3 <= num1)
		cout << "Minimal is: " << num3;
}

int main()
{
	ThirdTask();

	return 0;
}

