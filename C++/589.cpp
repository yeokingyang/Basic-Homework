// 589.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int next ;
	int number;
	int n1 = 0;
	int n2 = 1;


	while (true)
	{

		cin >> number;
		if (number == -1)
			break;
	

		for (int i = 1; i <= number; i++) {
			if (i == 1){
				cout << n1;

		}
				if (i == 2) {
					cout << "," << n2;
					
				}
			
			next = n1 + n2;
			n1 = n2;
			n2 = next;
		
			cout <<","<< next;
		}
		next = 0;
		n1 = 0;
		n2 = 1;
		cout << endl;
		
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
