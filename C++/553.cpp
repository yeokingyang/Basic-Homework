// 551.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class answer {

private :
	int a, b, c, d, e;
	int n;
public:
	answer (int x)
	{
		n = x;
	}

	void show() {
		a = n / 10000;
		b = n / 1000 % 10;
		c = n / 100 % 10;
		d = n / 10 % 10;
		e = n % 10;

		if (a == e && b == d) {
			cout << n << " " << "is a palindrome!!!" << endl;
		}

		else if (a != e || b != d) {
			cout<< n << " " << "is not a palindrome." << endl;
		}

	}


};






int main()
{
	int n;
	
	

	while (true) {

		cin >> n;
		

		if (n == -1)
			return 0;
		

		
			answer ans (n);
			ans.show();

		
	}
}




