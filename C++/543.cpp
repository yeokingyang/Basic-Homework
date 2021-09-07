// 543.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class HealthProfile {
private:
	string first, last;
	int month, day, year;
	int height, weight;
	char gender;
	int month2, day2, year2;
	int calculated_year;
public:
	HealthProfile(string x, string y, char g, int a, int b, int c, int e, int f) {
		first = x;
		last = y;
		month = a;
		day = b;
		year = c;
		gender = g;
		height = e;
		weight = f;

	}

	string getFirstName() {
		return first;
	}
	string getLastName() {
		return last;
	}
	char getGender() {
		return gender;
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

	int getHeight() {
		return height;
	}
	
	int getWeight() {
		return weight;
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

		int calculated_date = day2 - day;
		int calculated_month = month2 - month;
		calculated_year = year2 - year;

		return calculated_year;
	}

	int getMaximumHeartRate() {
		return (220 - (calculated_year));
	}
	int getMinimumTargetHeartRate() {
		return (50.0 / 100.0 * getMaximumHeartRate());
	}
	int getMaximumTargetHeartRate() {
		return (85.0 / 100.0 * getMaximumHeartRate());
	}
	int getBodyMassIndex() {
		int  BodyMassIndex = static_cast<double>(703*weight / (height * height));
		
		return BodyMassIndex;
	}
};




int main()
{
	string first, last; // first name, last name
	int month, day, year; // birth month, day, year
	int height, weight; // height (inches) and weight (pounds)
	char gender; // gender (M or F)

	// get user input
	cin >> first >> last;
	cin >> gender;
	cin >> month >> day >> year;
	cin >> height >> weight;

	// create a HealthProfile object
	HealthProfile profile(first, last, gender,
		month, day, year, height, weight);

	// display user information
	cout << "First Name: " << profile.getFirstName() << "\n";
	cout << "Last Name: " << profile.getLastName() << "\n";
	cout << "Gender: " << profile.getGender() << "\n";
	cout << "Date of Birth: " << profile.getBirthMonth() << "/"
		<< profile.getBirthDay() << "/"
		<< profile.getBirthYear() << "\n";
	cout << "Height (inches): " << profile.getHeight() << "\n";
	cout << "Weight (pounds): " << profile.getWeight() << "\n";
	cout << "Age: " << profile.getAge() << "\n";
	cout << "Maximum Heart Rate: "
		<< profile.getMaximumHeartRate() << "\n";
	cout << "Target Heart Rate: "
		<< profile.getMinimumTargetHeartRate() << "-"
		<< profile.getMaximumTargetHeartRate() << "\n";
	cout << "Body Mass Index: " << profile.getBodyMassIndex() << "\n\n";

	// display BMI information table
	cout << "BMI VALUES                        \n";
	cout << "Underweight: less than 18.5       \n";
	cout << "Normal:      between 18.5 and 24.9\n";
	cout << "Overweight:  between 25 and 29.9  \n";
	cout << "Obese:       30 or greater        \n";
} // end main