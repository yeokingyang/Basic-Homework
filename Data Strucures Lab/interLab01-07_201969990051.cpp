// Lab01-07_201969990051.cpp : This file contains the 'main' function. Program execution begins and ends there.
//201969990051 - Yeo King

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{	
	int a, b;
	while (true) {
		cout << "Input :  ";
		cin >> a >> b;
		cout << "Output : "<<lcm(a, b) << " " << gcd(a, b)<<"\n\n";
	
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
