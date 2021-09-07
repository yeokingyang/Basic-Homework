// 539.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using  namespace std;

class Account {

private:
	int initialBalance;
	
	
public:
	
     Account (int x) {
		 if (x < 0) {
			 cout << "Error: Initial balance cannot be negative." << endl;
			 initialBalance = 0;
		 }
		 else {

			 initialBalance = x;
		 }
		 

	}
	 
	
	 void debit(int y) {
	


		 if ( y > initialBalance) {
			 cout << "Debit amount exceeded account balance." << endl;
		 }
		 else {
			 initialBalance = (initialBalance - y);
		 }
	 }
	 
	 int getBalance() {
		


		 return initialBalance;
		 
		 
	 }



		 
};






int main()
{
	int initialBalance_1;
	int initialBalance_2;
	cin >> initialBalance_1 >> initialBalance_2;
	Account account1(initialBalance_1); // create Account object
	Account account2(initialBalance_2); // create Account object

	int withdrawalAmount; // stores withdrawal amount read from user

	cin >> withdrawalAmount; // obtain user input
	account1.debit(withdrawalAmount); // try to subtract from account1
	cout << "account1 balance: $" << account1.getBalance() << endl;

	cin >> withdrawalAmount; // obtain user input
	account2.debit(withdrawalAmount); // try to subtract from account2
	cout << "account2 balance: $" << account2.getBalance() << endl;
} // end main




