#include <stdlib.h>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
	ofstream f_out;
	ifstream in;
	f_out.open("test.txt");
	f_out << "Hello" << endl;
	f_out.close();

	f_out.open("test.txt", ios_base::in);
	char buff[250];

	if (in.is_open())
	{
		while (!in.eof())
		{
			in.getline(buff, 250);
			printf("%s", buff);
		}
	}
	else printf("File doesn't exist");

	f_out.close();
}

