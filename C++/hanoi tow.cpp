#include<iostream>
using namespace std;


void HANOIT(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << a << " --> " << c << endl;
		return;
	}

	HANOIT(n - 1, a, c, b);
	cout <<  a << " --> " << c << endl;
	HANOIT(n - 1, b, a, c);
}

int main()
{
	int number;
	while (true) {
		cin >> number;
		if (number == -1)
			break;

		HANOIT(number, '1', '2', '3');
		cout << endl;

	}
}