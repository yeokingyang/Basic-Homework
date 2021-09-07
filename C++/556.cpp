#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	while (true) {

		cin >> a;
		if (a == -1)
			break;
		else{
		
			cin >> b >> c;
		
			if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b))
				cout << "These are the sides of a right triangle."<< endl;
			else
				cout << "These do not form a right triangle."<<endl;
		
		
		}




	}



}