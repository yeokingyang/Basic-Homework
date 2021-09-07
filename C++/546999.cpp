// 546999.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
 
class Animal {
private:
	int age;
	string name, extra;

public:
	Animal (string y, int x, string z) {
		age = x;
		name = y;
		extra = z;
	}

	string showName() {
		return name;
	}
	int showAge() {
		return age;
	}
	string showExtra() {
		return extra;
	}

	void setAge(int x) {
		age = x;
	}
	void setName(string y) {
		name = y;
	}
	void setExtra(string z) {
		extra = z;
	}
	
};  






int main() {
	int age;
	string name, extra;
	cin >> name >> age >> extra;
	Animal animal(name, age, extra);
	cout << animal.showName() << endl;
	cout << animal.showAge() << endl;
	cout << animal.showExtra() << endl;
	cin >> name >> age >> extra;
	animal.setAge(age);
	animal.setName(name);
	animal.setExtra(extra);
	cout << animal.showName() << endl;
	cout << animal.showAge() << endl;
	cout << animal.showExtra() << endl;
}