#include <stdio.h>
#include <stdlib.h>

struct User {
	int age;
	int score;
	char nickname[100];
	char password[100];
	char email[100];
};

struct Date {
	int day;
	int month;
	int year;
	char month_name[16];
};

int main()
{
	Date birthday = { 5, 10, 2010, "Octomber"};
	printf("My birthday: %02d:%02d:%04d, month: %s\n", birthday.day, 
		birthday.month, birthday.year, birthday.month_name);

	//Date friendsBirthDate;
	//scanf_s("Enter day: %02d", &friendsBirthDate.day);
	//scanf_s("Enter month: %02d", &friendsBirthDate.month);
	//scanf_s("Enter year: %04d", &friendsBirthDate.year);
	//scanf_s("Enter month name: %15s (15 el max)", &friendsBirthDate.month_name);

	//printf("Friend's birthday: %02d:%02d:%04d, month: %15s\n", 
	//	friendsBirthDate.day, friendsBirthDate.month, 
	//	friendsBirthDate.year, friendsBirthDate.month_name);

	return 0;
}