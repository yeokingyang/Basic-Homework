

#include <iomanip>
#include <iostream>
using namespace std;




int main()
{
	int miles=0;
	int gallons=0;
	int sumMiles = 0;
	int sumGallons = 0;
	float averagempg = 0;
	

	while (miles>=0) {


		cin >> miles;

		if (miles == -1) {
			break;
		}

		else
			cin >> gallons;

		sumGallons = sumGallons + gallons;
		sumMiles = sumMiles+ miles;

			 float mpg = static_cast<float>(miles) / static_cast<float>(gallons);
		
			if (sumGallons != 0)
			averagempg = static_cast<float>(sumMiles) / static_cast<float>(sumGallons);
		

		cout << "MPG this trip: "<<fixed<< setprecision (6)<< mpg<<endl;
		cout << "Total MPG: "<<fixed<< setprecision(6)<< averagempg<<endl;
		
		

		
	} 
	

}

