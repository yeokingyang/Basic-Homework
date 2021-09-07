// 542.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class HeartRates {
private:
	string first, last;
	int month, day, year;
	int month2, day2, year2;
	int calculated_year;
public:
	HeartRates(string x, string y, int a, int b, int c) {
		first = x;
		last = y;
		month = a;
		day = b;
		year = c;
	}

	string getFirstName() {
		return first;
	}
	string getLastName() {
		return last;
	}
	int getBirthMonth() {
		return month;
	}
	int getBirthDay() {
		return day;
	}
	int getBirthYear() {
		return year;
	}

	int getAge() {
		
		cin >> month2 >> day2 >> year2;
		int montharray[] = { 31, 28, 31, 30, 31, 30, 31,
						  31, 30, 31, 30, 31 };

		
		if (day > day2) {
			day = day2 + montharray[month - 1];
			month2 = month2 - 1;
		}

	
		if (month > month2) {
			year2 = year2 - 1;
			month2 = month2 + 12;
		}

		int calculated_date = day2- day;
		int calculated_month = month2 - month;
		calculated_year = year2 - year;
		
		return calculated_year;
	}

	int getMaximumHeartRate() {
		return (220 - (calculated_year) );
	}
	int getMinimumTargetHeartRate() {
		return (50.0/100.0 * getMaximumHeartRate());
	}
	int getMaximumTargetHeartRate() {
		return (85.0/100.0 * getMaximumHeartRate());
	}
};








int main()
{
	string first, last; // first name, last name
	int month, day, year; // birth month, day, year

	// get user input
	cin >> first >> last;
	cin >> month >> day >> year;

	// create a HeartRates object
	HeartRates heartRates(first, last, month, day, year);

	// display user information
	cout << "First Name: " << heartRates.getFirstName() << "\n";
	cout << "Last Name: " << heartRates.getLastName() << "\n";
	cout << "Date of Birth: " << heartRates.getBirthMonth() << "/"
		<< heartRates.getBirthDay() << "/"
		<< heartRates.getBirthYear() << "\n";
	cout << "Age: " << heartRates.getAge() << "\n";
	cout << "Maximum Heart Rate: "
		<< heartRates.getMaximumHeartRate() << "\n";
	cout << "Target Heart Rate: "
		<< heartRates.getMinimumTargetHeartRate() << "-"
		<< heartRates.getMaximumTargetHeartRate() << "\n";
} // end main