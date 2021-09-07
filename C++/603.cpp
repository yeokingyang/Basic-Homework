#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int primeN(int);

int main()
{
	int number;
	while (true) {
		
		cin >> number;
		if (number == -1)
			break;

		for (int x = 2; x <= number; x += 1)
		{
			if (x == primeN(x))
				cout << x << endl;
		}
		cout << endl;
	}
}
int primeN(int x)
{
	int prime = 0;

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			prime++;

	}
	if (prime == 0) {
		return x;
	}
	else
		return prime;
	
}