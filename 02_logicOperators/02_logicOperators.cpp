#include <iostream>
#include <math.h>

using std::cout, std::cin, std::endl;

template <typename... T>
void print(T... a)
{
	(cout << ... << a) << endl;
}
int main()
{   

	//int sum;

	//cout << "Enter total sum: "; cin >> sum; cout << endl;

	//if ((sum >= 100) && (sum < 500)) 
	//{
	//	cout << "You have a discount of 5%" << endl;
	//	cout << "You have to pay: " << sum - sum * 0.05f << endl;
	//}
	//else if ((sum >= 500) && (sum < 1000))
	//{
	//	cout << "You have a discount of 10%" << endl;
	//	cout << "You have to pay: " << sum - sum * 0.10f << endl;
	//}
	//else if (sum >= 1000)
	//{
	//	cout << "You have a discount of 25%" << endl;
	//	cout << "You have to pay: " << sum - sum * 0.25f << endl;
	//}
	//else
	//{
	//	cout << "You have no discount" << endl;
	//	cout << "You have to pay: " << sum << endl;
	//}
	float a, b, res;
	char operation;

	cout << "Enter first number: "; cin >> a; cout << endl;
	cout << "Enter second number: "; cin >> b; cout << endl;
	cout << "Enter operation (+, -, *, /): "; cin >> operation; cout << endl;

	switch (operation)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		if (b == 0)
		{
			cout << "Error: Division by zero is not allowed." << endl;
			return 1;
		}

		res = a / b;
		break;
	default:
		cout << "Invalid operation" << endl;
		return 1;
	}
	cout << "Result: " << res << endl;

	char grade;
	cout << "Enter your grade: "; 
	cin >> grade; 
	cout << endl;

	switch (grade)
	{
	case 'A':
	case 'a':
		cout << "Excellent!" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Good!" << endl;
		break;
	case 'C':
	case 'c':
		cout << "Normal!" << endl;
		break;
	case 'D':
	case 'd':
		cout << "Not bad!" << endl;
		break;
	case 'F':
	case 'f':
		cout << "Bad!" << endl;
		break;
	default:
		cout << "Invalid grade" << endl;
		return 1;
	}

    return 0;
}
