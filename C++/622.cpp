#include<iostream>

using namespace std;

int redigsum(int a)
{
	int tot= 0;

	while (a > 0 || tot > 9)
	{
		if (a == 0)
		{
			a = tot;
			tot = 0;
		}
		tot += a % 10;
		a /= 10;
	}
	return tot;
}


int main()
{
	int n;
	while (true) {
		cin >> n;
		if (n == -1)
			break;
		cout << redigsum(n)<<endl;
	}
}