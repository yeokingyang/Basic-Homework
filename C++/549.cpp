// 549.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Person {
private:
	string lname; 
	string fname; 
public:
	Person(string x, string y) {
		lname = x;
		fname = y;
	}
	void Show() const {
		cout << fname <<" "<< lname << endl; 
	} 
	void FormalShow() const {
		cout << lname <<" "<< fname << endl;
	}
		
};


int main()
{
	string lastname;
	string firstname;
	char status = 'y';
	

	while (status=='y'){
		
	
		cin >> status;
		if (status=='n') {
			break;
		}
		cin>>lastname >> firstname;
		Person person(lastname, firstname);
		person.Show();
		person.FormalShow();

	
}

	

}
