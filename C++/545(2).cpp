// 545(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Animal {


public:

	int x;
	string y, z;
	int age;
	string name, extra;

	Animal (string name,int age,string extra){
		y = name;
		x = age;
		z = extra;
	}
	void setAge(int age1);
	void setName(string name1);
	void setExtra(string extra1);



	string showName() {
		return (y);
	}
	int showAge() {
		return (x);
	}
	string showExtra() {
		return (z);
	}


};

void Animal::setAge(int age1) {
	age = age1;
}

void Animal::setName(string name1) {
	name = name1;
}

void Animal::setExtra(string extra1) {
	name = extra1;
}






int main() {
	int age;
	string name, extra;
	cin >> name >> age >> extra;
	Animal animal1(name, age, extra);
	cin >> name >> age >> extra;
	Animal animal2(name, age, extra);
	animal1.setAge(age);
	animal1.setName(name);
	animal1.setExtra(extra);
	animal2.setAge(age);
	animal2.setName(name);
	animal2.setExtra(extra);
	cout << animal1.showName() << endl;
	cout << animal1.showAge() << endl;
	cout << animal1.showExtra() << endl;
	cout << animal2.showName() << endl;
	cout << animal2.showAge() << endl;
	cout << animal2.showExtra() << endl;
}