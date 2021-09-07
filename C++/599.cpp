#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double result(double, double);

double side1;
double side2;
double hypotenuse;

int main()
{
	double a, b;

	while (true) {
		cin >> a;
		if (a == 0)
			break;
		cin >> b;

		cout << fixed << setprecision(1)
			<< result(a, b) << endl;
	}
}


double result(double side1, double side2)
{
	hypotenuse = sqrt(side1 * side1 + side2 * side2);
	return hypotenuse;
}
