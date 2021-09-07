// 547.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Clock {
private:
	int hour;
	int  minute, second;
public:
	Clock(int x, int y, int z) {
		hour = x;
		minute = y;
		second = z;
	}
	void showin12()
	{
		if (hour / 12 < 1) {
			hour = hour % 12;
			cout << hour << ":" << minute << ":" << second << " a.m.";
		}
		else {
			hour = hour % 12;
			cout << hour << ":" << minute << ":" << second << " p.m.";
		}
	}
	void showin24()
	{

		cout << hour << ":" << minute << ":" << second << endl;


	}

};




int main() {
	int hour, minute, second;
	cin >> hour >> minute >> second;
	Clock clock(hour, minute, second);
	clock.showin24();
	clock.showin12();
}