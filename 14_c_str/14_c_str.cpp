#include <iostream>
using namespace std;

int main()
{
	char mystr[] = "string";
	cout << mystr << endl;

	for (int i = 0; i < sizeof(mystr); i++)
	{
		cout << static_cast<int>(mystr[i]);
	}

	char text[] = "Print this";

	return 0;
}

