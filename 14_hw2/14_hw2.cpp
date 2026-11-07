#include <iostream>
using namespace std;

char compareSymbols(const char arr[])
{
	int countA = 0, countB = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'a' || arr[i] == 'A')
			countA++;
		else if (arr[i] == 'o' || arr[i] == 'O')
			countA++;
	}
	return (countA > countB) ? 'A' : 'B';
}

void countSymbols(const char arr[])
{
	int countLettrs = 0, countDigits = 0, countSpaces = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (isalpha(arr[i]))
			countLettrs++;
		else if (isdigit(arr[i]))
			countDigits++;
		else if (isspace(arr[i]))
			countSpaces++;
	}

	cout << "Letters: " << countLettrs << endl;
	cout << "Digits: " << countDigits << endl;
	cout << "Spaces: " << countSpaces << endl;
}

void changeRegister(const char arr[])
{	
	for (int i = 0; arr[i] != '\0'; i++)
	{
		cout << toupper(arr[i]);
	}
	cout << endl;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		cout << tolower(arr[i]);
	}
}

int Mystrlen(const char arr[])
{
	int i = 0;
	for (i; arr[i] != '\0'; i++);
	return i;
}

int main()
{
	return 0;
}