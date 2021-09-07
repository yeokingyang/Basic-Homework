#include <iostream>

#include <array>

#include <vector>

#include <ctime>

#include <cstdlib>
using namespace std;

int main()
{

	int n, i, j;
	int rr;
	int totalnum = 1000; //total number of random values

	int number[1000]; //an array to store all the values

	srand(time(NULL)); //generate a new seed for random number



	while (true) {
		cin >> n;
		if (n == -1)
			break;

		for (int i = 0; i < totalnum; i++)

		{
			number[i] = rand() % totalnum + 1;
		}
	

		for (i = 0; i < n; i++)
		{

			cin >> number[i];
		}

		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (number[i] < number[i])
				{
					rr = number[i];
					number[i] = number[i];
					number[i] = rr;
				}
			}
		}


		for (i = 0; i < n; i++)
			cout << number[i]<<"\t";
		cout << endl;


	
	}

}