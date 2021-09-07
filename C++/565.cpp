#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char part;
	cout << boolalpha;
	while (true) {

		cin >> part;

		if (part == 'e') {
			break;
		}

		if (part == 'a') {
			// Prove part (a)
			// condition1: (x < 5), condition2: (y >= 7)
			int x;
			int y;
			cin >> x >> y;
			cout << "(x < 5): " << (if (x<5) true else false) << endl;
			cout << "(y >= 7): " << (if (y>=7)true else false) << endl;

			// test for validity
			if (if(x<5)true&&if(y>=)false)
				cout << "!(x < 5) && !(y >= 7) is equivalent to"
				<< " !((x < 5) || (y >= 7))" << endl;
			else
				cout << "!(x < 5) && !(y >= 7) is not equivalent to"
				<< " !((x < 5) || (y >= 7))" << endl;
			cout << endl;
		}
		

		}
	}
 // end main