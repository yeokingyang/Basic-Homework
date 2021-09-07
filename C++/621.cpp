#include <iostream>
using namespace std;
template < class T>
// definition of function template minimum; finds the smaller value
//ToDo minimumint minimum(int, int);
T minimum(T val1, T val2) {
	T minval = val1;
	if (val2 < val1)
		return val2;

	return minval;
}


int main()
{
	while (true) {
		// demonstrate minimum with int values
		int int1 = 0;// first int value
		cin >> int1;
		if (int1 == -1) {
			break;
		}
		int int2 = 0; // second int value
		cin >> int2;

		// invoke int version of minimum
		cout << "The smaller integer value is: " << minimum(int1, int2) << endl;

		// demonstrate minimum with char values
		char char1 = ' '; // first char value
		char char2 = ' '; // second char value

		// cout << "\n\nInput two characters: ";
		cin >> char1 >> char2;

		// invoke char version of minimum
		cout << "The smaller character value is: " << minimum(char1, char2) << endl;

		// demonstrate minimum with double values
		double double1 = 0; // first double value
		double double2 = 0; // second double value

		// cout << "\n\nInput two double values: ";
		cin >> double1 >> double2;

		// invoke double version of minimum
		cout << "The smaller double value is: " << minimum(double1, double2)
			<< endl;

		cout << endl;
	}

} // end main

