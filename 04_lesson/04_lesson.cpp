#include <iostream>

using namespace std;

int main()
{
	int roof_lenght = 43;

	for (int i = roof_lenght; i > 0; i -= 2)
	{
		for (int j = 0; j < (i - 1) / 2; j++)
			cout << " ";
		cout << "/";

		for (int g = 0; g <= (roof_lenght - i); g++)			
			cout << "#";

		cout << "\\" << endl;

	}

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (j == 0)
				cout << "\t";

			cout << "|###|";
		}
		cout << endl;
	}
	
	return 0;
}

