#include <iostream>

using namespace std;

int main()
{
	const int size = 10;
	int arr[size]{}; // Fills array with 0

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	int summa = 0;

	for (int i = 0; i < size; i++)
		if (arr[i] < 0) summa += arr[i];

	cout << "Negative's sum: " << summa << endl;

	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	cout << "Max element: " << max << endl;
	cout << "Min element: " << min << endl;

	int lastPos;
	int firstNeg;

	for (int i = 0; i < size; i++)
		if (arr[i] < 0) { firstNeg = arr[i]; break; }

	for (int i = size - 1; i >= 0; i--)
		if (arr[i] > 0) { lastPos = arr[i]; break; }

	cout << "Last positive el: " << lastPos;
	cout << "First negative el: " << firstNeg;

	return 0;
}
