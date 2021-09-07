#include <iostream>
using namespace std;

int main()
{
	unsigned int x = 5; // initialize x to 5
	unsigned int y = 8; // initialize y to 8

	// part a
	if (y == 8)
		if (x == 5)
			cout << "@@@@@" << endl;
		else
			cout << "#####" << endl;
	cout << "$$$$$" << endl;
	cout << "&&&&&" << endl;



	cout << endl;

	// part b
	if (y == 8)
		if (x == 5)
			cout << "@@@@@" << endl;
		else
		{
			cout << "#####" << endl;
			cout << "$$$$$" << endl;
			cout << "&&&&&" << endl;
		}



	cout << endl;

	// part c
	if (y == 8)
		if (x == 5)
			cout << "@@@@@" << endl;
		else
		{
			cout << "#####" << endl;
			cout << "$$$$$" << endl;
		}
	cout << "&&&&&" << endl;




	cout << endl;

	// part d
	y = 7;

	if (y == 8)
		if (x == 5)
			cout << "@@@@@" << endl;
		else {}
			cout << "#####" << endl;
			cout << "$$$$$" << endl;
			cout << "&&&&&" << endl;
		
} // end main