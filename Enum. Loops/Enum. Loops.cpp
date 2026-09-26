#include <iostream>

using namespace std;

int main()
{
	//enum countries { USA = 1, Ukraine = 380, France = 33,
	//				 Australia = 61, Italy = 39 };

	//cout << "Code Ukraine: " << Ukraine << endl;

	//enum coins { penny = 1, nickel = 5, dime = 10,
	//			 quarter = 25, half = 50, dollar = 100 };
	//coins c = nickel;

	//int coin;
	//cout << "Enter value of American coin: ";
	//cin >> coin;

	//switch (coin)
	//{
	//case penny: cout << "penny = 1 coin" << endl;
	//	break;
	//case nickel: cout << "nickel = 5 coin" << endl;
	//	break;
	//case dime: cout << "dime = 10 coin" << endl;
	//	break;
	//case quarter: cout << "quarter = 25 coin" << endl;
	//	break;
	//case half: cout << "half = 50 coin" << endl;
	//	break;
	//case dollar: cout << "dollar = 100 coin" << endl;
	//	break;
	//default:
	//	break;
	//}

	//enum Genre { Drama, Epos, Lirica, Comedy, Novel, Fantasy };
	//Genre genre;
	//genre = Drama;

	//int i = 0;
	//while (i < 10)
	//{
	//	cout << i++ << endl;
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << " ";
	//}

	int x = 0;
	for (; x < 11; x++) cout << "x: " << x << endl;

	float y = 0.0f;
	for (; y <= 2.0f; y += 0.2f) cout << "y: " << y << endl;

	return 0;
}