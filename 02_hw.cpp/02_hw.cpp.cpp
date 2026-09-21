#include <iostream>

using namespace std;

void Task1If()
{
	int country;

	cout << "Enter country: ";
	cout << "1 - Ukraine" << endl;
	cout << "2 - Poland" << endl;
	cout << "3 - Canada" << endl;
	cout << "4 - USA" << endl;
	cout << "5 - Great Britain" << endl;
	cout << "Your choice: ";

	cin >> country;

	if (country == 1)
	{
		cout << "Capital of Ukraine is Kyiv" << endl;
	}
	else if (country == 2)
	{
		cout << "Capital of Poland is Warsaw" << endl;
	}
	else if (country == 3)
	{
		cout << "Capital of Canada is Ottawa" << endl;
	}
	else if (country == 4)
	{
		cout << "Capital of USA is Washington, D.C." << endl;
	}
	else if (country == 5)
	{
		cout << "Capital of Great Britain is London" << endl;
	}
	else
	{
		cout << "Invalid choice" << endl;
	}

}

void Task1Switch()
{
	int country;

	cout << "Enter country: ";
	cout << "1 - Ukraine" << endl;
	cout << "2 - Poland" << endl;
	cout << "3 - Canada" << endl;
	cout << "4 - USA" << endl;
	cout << "5 - Great Britain" << endl;
	cout << "Your choice: ";

	cin >> country;

	switch (country)
	{
	case 1:
		cout << "Capital of Ukraine is Kyiv" << endl;
		break;
	case 2:
		cout << "Capital of Poland is Warsaw" << endl;
		break;
	case 3:
		cout << "Capital of Canada is Ottawa" << endl;
		break;
	case 4:
		cout << "Capital of USA is Washington, D.C." << endl;
		break;
	case 5:
		cout << "Capital of Great Britain is London" << endl;
		break;
	default:
		cout << "Invalid choice" << endl;
	}

}

void Task2If()
{
	int day;
	cout << "Enter number of the day of the week (1-7): ";
	cin >> day;

	if (day >= 1 && day <= 5) {
		cout << "It's a working day." << endl;
	}
	else if (day == 6 || day == 7)
	{
		cout << "It's a weekend." << endl;
	}
	else
	{
		cout << "Invalid day number." << endl;
	}

}

void Task2Switch()
{
	int day;
	cout << "Enter number of the day of the week (1-7): ";
	cin >> day;
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "It's a working day." << endl;
		break;
	case 6:
	case 7:
		cout << "It's a weekend." << endl;
		break;
	default:
		cout << "Invalid day number." << endl;
	}
}

void Task3If()
{
	int course;
	cout << "Enter course:" << endl;
	cout << "1 - North" << endl;
	cout << "2 - South" << endl;
	cout << "3 - West" << endl;
	cout << "4 - East" << endl;
	cout << "Your choice: ";
	cin >> course;

	if (course == 1)
	{
		cout << "It will change to South" << endl;
	}
	else if (course == 2)
	{
		cout << "It will change to North" << endl;
	}
	else if (course == 3)
	{
		cout << "It will change to East" << endl;
	}
	else if (course == 4)
	{
		cout << "It will change to West" << endl;
	}
	else
	{
		cout << "Invalid course" << endl;
	}
}

void Task3Switch()
{
	int course;
	cout << "Enter course:" << endl;
	cout << "1 - North" << endl;
	cout << "2 - South" << endl;
	cout << "3 - West" << endl;
	cout << "4 - East" << endl;
	cout << "Your choice: ";
	cin >> course;
	switch (course)
	{
	case 1:
		cout << "It will change to South" << endl;
		break;
	case 2:
		cout << "It will change to North" << endl;
		break;
	case 3:
		cout << "It will change to East" << endl;
		break;
	case 4:
		cout << "It will change to West" << endl;
		break;
	default:
		cout << "Invalid course" << endl;
	}
}

void Task4If()
{
	int animal;
	cout << "Enter animal:" << endl;
	cout << "1 - Giraffe" << endl;
	cout << "2 - Eagle" << endl;
	cout << "3 - Shark" << endl;
	cout << "4 - Elephant" << endl;
	cout << "5 - Lion" << endl;
	cout << "6 - Tiger" << endl;
	cout << "7 - Bear" << endl;
	cout << "Your choice: ";
	cin >> animal;

	if (animal == 1)
	{
		cout << "Class: Mammal" << endl;
	}
	else if (animal == 2)
	{
		cout << "Class: Bird" << endl;
	}
	else if (animal == 3)
	{
		cout << "Class: Fish" << endl;
	}
	else if (animal == 4)
	{
		cout << "Class: Mammal" << endl;
	}
	else if (animal == 5)
	{
		cout << "Class: Mammal" << endl;
	}
	else if (animal == 6)
	{
		cout << "Class: Mammal" << endl;
	}
	else if (animal == 7)
	{
		cout << "Class: Mammal" << endl;
	}
	else
	{
		cout << "Invalid animal" << endl;
	}

}

void Task4Switch()
{
	int animal;
	cout << "Enter animal:" << endl;
	cout << "1 - Giraffe" << endl;
	cout << "2 - Eagle" << endl;
	cout << "3 - Shark" << endl;
	cout << "4 - Elephant" << endl;
	cout << "5 - Lion" << endl;
	cout << "6 - Tiger" << endl;
	cout << "7 - Bear" << endl;
	cout << "Your choice: ";
	cin >> animal;
	switch (animal)
	{
	case 1:
		cout << "Class: Mammal" << endl;
		break;
	case 2:
		cout << "Class: Bird" << endl;
		break;
	case 3:
		cout << "Class: Fish" << endl;
		break;
	case 4:
		cout << "Class: Mammal" << endl;
		break;
	case 5:
		cout << "Class: Mammal" << endl;
		break;
	case 6:
		cout << "Class: Mammal" << endl;
		break;
	case 7:
		cout << "Class: Mammal" << endl;
		break;
	default:
		cout << "Invalid animal" << endl;
	}
}

int main()
{
	Task1If();
	Task1Switch();
	Task2If();
	Task2Switch();
	Task3If();
	Task3Switch();
	Task4If();
	Task4Switch();
	return 0;
}