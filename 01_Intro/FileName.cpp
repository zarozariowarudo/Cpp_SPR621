#include <iostream>

using namespace std;

int main() 
{
	int daysIn2000y = 366;
	const int hourInDay = 24;
	
	int hourIn2000y;
	hourIn2000y = daysIn2000y * hourInDay;

	cout << "Hours in 2000 years: " << hourIn2000y << endl;

	float discount = 0.05f;
	float cost;
	int count;

	cout << "Enter the cost of the item: ";
	cin >> cost;
	cout << "Enter the quantity: ";
	cin >> count;

	float price;
	price = cost * count - discount * cost * count;
	cout << "You need to pay: " << price << endl;

	return 0;
}