#include <iostream>
using namespace std;

bool isPerfect(unsigned int); // function prototype
void printSum(unsigned int); // function prototype

int main()
{
	// cout << "Perfect integers between 1 and 1000:" << endl;
	int maxnum = 0;
	while (true) {
		cin >> maxnum;
		if (maxnum == -1)
			break;
		// loop from 2 to maxnum
		for (unsigned int j = 2; j <= maxnum; ++j)
		{
			// if current integer is perfect 
			if (isPerfect(j))
				printSum(j); // print it as sum of factors
		} // end for
		cout << endl;
	}

} // end main
bool isPerfect(unsigned int j) {
	int sum = 0;
	 int i = 1;
	while (i < j) {
		if (j % i == 0)
			sum = sum + i;
		i++;
	}
		if (sum == j)
			return true;
		else
			return false;
}

void printSum(unsigned int j) {
	int sum = 0;
	 int i = 1;
	cout << j<<"=";
	while (i < j) {
		
		if (j % i == 0) {
			if(i==1)
				cout << i;
			else 
				cout <<"+"<< i;
		}
		i++;
	

	}
	cout << endl;
	}
	
	


