// 551.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
	int acnum = 0;
	float balance = 0.0;
	float charges = 0;
	float credits = 0;
	float credit_limit=0;

	while (acnum >= 0) {

		cin >> acnum;

		if (acnum <=0) {
			break;
		}
		
		else
			cin >> balance >> charges >> credits >> credit_limit;

		float newbalance = balance + charges - credits;

		cout << "New balance is " << fixed << setprecision(2) << newbalance << endl;
		if (newbalance > credit_limit) {
		cout << "Account: " << acnum << endl;
		cout << "Credit limit: "<<fixed<<setprecision(2) << credit_limit << endl;
		
		cout << "Credit Limit Exceeded." << endl;
		}


	}




}

