// 548.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Student {
private:
	string FirstName, LastName;
	int ID, scholarship;

public:
	Student(string x, string y, int z, int j) {
		FirstName = x;
		LastName = y;
			ID = z;
		scholarship = j;

	}
	void name(){
		cout << FirstName << " " << LastName << endl;
	}
	void number() {
		if (ID < 0){
			ID = 0;
		}
		if (scholarship < 0) {
			scholarship = 0;
		}

			cout << ID << " " << scholarship << endl;
		
	}
	void raise(){
		cout << (scholarship / 10) + scholarship << endl; 

		
	}



};



int main (){
	string FirstName, LastName;
int ID, scholarship;
cin >> FirstName >> LastName >> ID >> scholarship;
Student stud1(FirstName, LastName, ID, scholarship);
cin >> FirstName >> LastName >> ID >> scholarship;
Student stud2(FirstName, LastName, ID, scholarship);
stud1.name();
stud1.number();
stud2.name();
stud2.number();
stud1.raise();
stud2.raise();





}