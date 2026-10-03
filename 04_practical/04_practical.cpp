#include <iostream>

using namespace std;

void drawA(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i < j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawB(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i > j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawC(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i <= j && i + j <= columns - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawD(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i >= j && i + j >= columns - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawE(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if ((i >= j && i + j >= columns - 1) ||  (i <= j && i + j <= columns - 1))
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawF(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i >= j && i + j <= columns - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawG(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i <= j && i + j >= columns - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawJ(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i + j >= columns - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void drawK(int columns, int rows)
{
	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i + j > columns - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

int main()
{
	char input;
	int rows, columns;
	cout << "Enter figure to draw (a-k): ";
	cin >> input;
	cout << "Enter lenght of row: ";
	cin >> rows;
	cout << "Enter lenght of column: ";
	cin >> columns;

	cout << endl;

	switch (input)
	{
		default: cout << "Wrong operation";
		case 'a': { drawA(columns, rows); break; }
		case 'b': { drawB(columns, rows); break; }
		case 'c': { drawC(columns, rows); break; }
		case 'd': { drawD(columns, rows); break; }
		case 'e': { drawE(columns, rows); break; }
		case 'f': { drawF(columns, rows); break; }
		case 'g': { drawG(columns, rows); break; }
		case 'j': { drawJ(columns, rows); break; }
		case 'k': { drawK(columns, rows); break; }
	}



	return 0;
}
