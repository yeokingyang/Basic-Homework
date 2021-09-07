// 554.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

 

int main()
{
	int n=1;
	

	while (n>0) {

		cin >> n;


		if (n < 0)
			return 0;
		if (n > 100)
			return 0;

		else
		{
			if (n % 2 == 0) {
				for (int col = 0; col < n; ++col) {
					for (int row = 0; row < n; ++row) {

							cout << "* ";

					}
					if (col % 2 == 0) {
						cout << endl;
						cout << ' ';
					}
					else
						cout << endl;
				}
				cout << endl;
			}


			else {
				if (n%2 != 0) { cout << ' '; }
					for (int col = 0; col < n; ++col) {
						for (int row = 0; row < n; ++row) {
				
								cout << "* ";

						}
						if (col % 2 == 0) 
							cout << endl;
									
						else
						{
							cout << endl;
							cout << ' ';
						}

					}		
					cout << endl;
			}

		}
	}
}