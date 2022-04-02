// Lab01-03-201969990051.cpp : This file contains the 'main' function. Program execution begins and ends there.
//201969990051- Yeo King

#include <iostream>
using namespace std;



int main()
{
	int height, length;
	int row, column;

	std::cin >> length >> height;

	row = 0;
	while (row < height) {
		column = 0;
		while (column < length) {

			
			if (row == 0 && column == 0 || row == height-1 && column == 0) {
				printf("+");
			}
			else if (row == 0 && column == length-1 || row == height-1 && column==length-1) {
				printf("+");
			}
			else if (row == 0 && column == length-1 ||row==0) {
				printf("-");
			}
			else if(row == height - 1  ) {
				printf("-");
			}
			else if (column == 0 && row != length && row !=0 ) {
				printf("|");
			}
			else if (column == length - 1 && row != length && row != 0) {
				printf("|");
			}
			else {
				printf("a");
			}

			column = column + 1;
		}
		printf("\n");
		row = row + 1;
	}
	return 0;
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
