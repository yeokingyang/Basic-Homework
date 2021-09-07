#include <iostream>
using namespace std;

int calcSecondsFromTvelwe(int hh, int mm, int ss)
{
	return (hh % 12 * 3600 + mm * 60 + ss);   
}

int main()
{

	int hours, minutes, seconds;
	int time1, time2;
	
	while (true) {
		cin >> hours;
			if (hours == -1)
				break;
		cin>> minutes >> seconds;
		time1 = calcSecondsFromTvelwe(hours, minutes, seconds);
		cin >> hours >> minutes >> seconds;
		time2 = calcSecondsFromTvelwe(hours, minutes, seconds);
		cout << abs(time1 - time2) << endl;
	
	
	}
	}