#include <iostream>
using namespace std;


int main()
{
	int counter = 1;
	int number = 0;
	int largest = 0;
	

	while (number>=0) {
	
		counter = 1;
			while (counter <= 10) {
				if (number == -1)
					return 0;
				cin >> number;

				if (number > largest)
					largest = number;
				counter++;


			}

			cout << "Largest is " << largest << endl;
			largest = 0;
	}
	
}
