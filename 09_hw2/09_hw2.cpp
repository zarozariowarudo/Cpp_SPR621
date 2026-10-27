#include <iostream>
using namespace std;

int Pow(int num, int step)
{
	if (step == 0) return 1;
	return num * Pow(num, step - 1);
}

void Star(int count)
{
	if (count == 0)
	{
		cout << endl;
		return;
	}
	cout << "*";
	Star(count - 1);
}

int sumBetween(int a, int b)
{
	if (a > b) return sumBetween(b, a);
	if (a == b) return a;
	return a + sumBetween(a + 1, b);
}

int main()
{
	Star(10);
	cout << "Sum between 1 and 10: " << sumBetween(1, 10) << endl;

	return 0;
}