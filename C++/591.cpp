#include <iostream>
#include <string> 
using namespace std;
int main()
{
	double base;
	double myint1;
	string num;
	int counter = 0;

	while (true) {
		base = 1000000000;
		counter = 0;
		cin >> num;
		myint1 = stoi(num);
		if (myint1 == -1)
			break;

		while (base < 2500000000) {

			base = base + ((base * myint1) / 100);
			counter++;

		}
		cout << counter << endl;
	}

}