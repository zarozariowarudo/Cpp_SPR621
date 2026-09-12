#include <iostream>

using namespace std;


//HOMEWORK 1

//void firstTask()
//{
//	cout << "I" << endl;
//	cout << "\tlove" << endl;
//	cout << "\t\tyou" << endl;
//	cout << "\t\t\tC++!" << endl << endl;
//}
//
//void secondTask()
//{
//	cout << "\t...::RESUME::..." << endl << endl;
//	cout << "Name: \t\t Andrey" << endl;
//	cout << "Surname: \t Shibanov" << endl;
//	cout << "Last name: \t Sergeyevich" << endl;
//	cout << "Date of birth: \t 05.10.2026" << endl;
//	cout << "City: \t\t Kharkiv" << endl;
//	cout << "Age: \t\t 15" << endl << endl;
//	cout << "Hobby: \t\t Programming (Web - Django, microcontrollers, C++)" << endl;
//	cout << "::.......................::" << endl << endl;
//}
//
//void thirdTask()
//{
//	int diagonal, result;
//	const float inchToCm = 2.54f;
//	cout << "Enter the diagonal of your screen in inches: ";
//	cin >> diagonal;
//
//	result = diagonal * inchToCm;
//
//	cout << "The diagonal of your screen in centimeters is: " << result << " cm" << endl << endl;
//}
//
//void fourthTask()
//{
//	int eatenInOneDay;
//	const int daysInMonth = 30;
//
//	cout << "Enter how many grams does your hamster eat in one day: ";
//	cin >> eatenInOneDay;
//
//	cout << "In a month, hamster will eat " << (eatenInOneDay * daysInMonth) * 0.001 << "kg" << endl << endl;
//}




// HOMEWORK 2

void firstTask()
{
	int num1, num2, num3;

	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	cout << "Enter 3rd number: ";
	cin >> num3;

	cout << "Your numbers are: " << num1 << ", " << num2 << ", " << num3 << endl;
	cout << "Their sum: " << num1 + num2 + num3 << endl << endl;
}

void secondTask()
{
	int num1, num2, average;

	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;

	average = (num1 + num2) / 2;

	cout << "Their average: " << average << endl << endl;
}

void thirdTask()
{
	int kilometers;
	const int metersInKilometer = 1000;

	cout << "Enter distance in kilometers: ";
	cin >> kilometers;
	cout << "Distance in meters: " << kilometers * metersInKilometer << endl << endl;
}

void fourthTask()
{
	int price1, price2, price3, price4, count, totalPrice;

	cout << "Enter price of 1st item: ";
	cin >> price1;
	cout << "Enter price of 2nd item: ";
	cin >> price2;
	cout << "Enter price of 3rd item: ";
	cin >> price3;
	cout << "Enter price of 4th item: ";
	cin >> price4;
	cout << "Enter count of items: ";
	cin >> count;

	totalPrice = (price1 + price2 + price3 + price4) * count;
	cout << "Total price: " << totalPrice << endl << endl;
}

void fifthTask()
{
	int num, square;

	cout << "Enter a number: ";
	cin >> num;
	square = num * num;
	cout << "Square of the number: " << square << endl << endl;
}

void sixthTask()
{
	int days;
	const int hoursInDay = 24;
	const int minutesInHour = 60;

	cout << "Enter number of days: ";
	cin >> days;

	cout << "Number of minutes: " << days * hoursInDay * minutesInHour << endl << endl;
}

int main() 
{
	// CLASSWORK
	// 
	//int daysIn2000y = 366;
	//const int hourInDay = 24;
	//
	//int hourIn2000y;
	//hourIn2000y = daysIn2000y * hourInDay;

	//cout << "Hours in 2000 years: " << hourIn2000y << endl;

	//float discount = 0.05f;
	//float cost;
	//int count;

	//cout << "Enter the cost of the item: ";
	//cin >> cost;
	//cout << "Enter the quantity: ";
	//cin >> count;

	//float price;
	//price = cost * count - discount * cost * count;
	//cout << "You need to pay: " << price << endl;



	firstTask();
	secondTask();
	thirdTask();
	fourthTask();
	fifthTask();
	sixthTask();

	return 0;
}