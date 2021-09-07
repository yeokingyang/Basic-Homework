// 534.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int A, B, C, D, E;

	cout << "please enter first number : ";
	cin >> A;
	cout << "please enter second number : ";
	cin >> B;
	cout << "please enter third number : ";
	cin >> C;
	cout << "please enter fourth number : ";
	cin >> D;
	cout << "please enter fifth number : ";
	cin >> E;

	cout << "The Largest number is " << max(max(max(max(A, B),C),D),E) << endl;
	cout << "The smallest number is " << min(min(min(min(A, B), C), D), E) << endl;
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
