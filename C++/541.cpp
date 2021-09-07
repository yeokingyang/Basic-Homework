// 541.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Date {
	
private:
	int day, month, year;
public:
	Date(int y, int x, int z) {
		day = x;
		month = y;
		year = z;

		if (month > 12) {
			month = 1;
		}
		if (month < 1) {
			month = 1;
		}
	}

	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	int getYear() {
		return year;
	}

	void displayDate() {
		cout << month << "/" << day << "/" << year<<endl;

	}

	void setMonth(int x) {

		month = x;
		if (month > 12) {
			month = 1;
		}
		if (month < 1) {
			month = 1;
		}
	}
	void setDay(int y) {
		day= y;
	}
	void setYear(int d) {
		year = d;
	}
};


















int main()
{
	int day, month, year;
	cin >> day >> month >> year;
	Date date(month, day, year); // create a Date object for May 6, 1981

	// display the values of the three Date data members
	cout << "Month: " << date.getMonth() << endl;
	cout << "Day: " << date.getDay() << endl;
	cout << "Year: " << date.getYear() << endl;

	date.displayDate(); // output the Date as 5/6/1981

	// modify the Date 
	cin >> day >> month >> year;
	date.setMonth(month); // invalid month
	date.setDay(day);
	date.setYear(year);

	date.displayDate(); // output the modified date (1/1/2005)
} // end main