
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int paycode = 0;
	double weeklySalary;
	double hourlySalary;
	int hours;
	double grossSales;
	double payPerItem;
	int items;
	double totalPay;

	while (true) {

		cin >> paycode;
		if (paycode == -1)
			break;
		while (paycode != -1)
		{
			switch (paycode)
			{
			case 1:
				
				cin >> weeklySalary;
				totalPay = weeklySalary;
				cout << "The manager's pay is $" << fixed << setprecision(2) << totalPay << endl;
				break;
			case 2:
				
				cin >> hourlySalary;
				
				cin >> hours;
				if (hours <= 40)
					totalPay = hours * hourlySalary;
				else
					totalPay = 40 * hourlySalary + (hours - 40) * hourlySalary * 1.5;

				cout << "Worker's pay is $" << fixed << setprecision(2) << totalPay << endl;
				break;
			case 3:
			
				cin >> grossSales;
				totalPay = 250 + grossSales * 0.057;
				cout << "Commission worker's pay is $" << fixed << setprecision(2) << totalPay << endl;
				break;
			case 4:
				
				cin >> items;
				
				cin >> payPerItem;
				totalPay = items * payPerItem;
				cout << "Pieceworker's pay is $" << fixed << setprecision(2) << totalPay << endl;
				break;
			default:
				cout << "Invalid pay code." << endl;
	
				break;
			}
			cin >> paycode;
			if (paycode == -1)
				break;
		
		}
	}
}