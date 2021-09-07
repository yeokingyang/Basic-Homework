#include <iostream>
#include <cmath>
using namespace std;

unsigned long power(unsigned long, unsigned long); // function prototype

int main()
{
	unsigned long b = 0; // base 
	unsigned long e = 0; // exponent
	
	// cout << "Enter a base and an exponent: ";
	while (true) {
		cin >> b;
		if (b == 0) {
			break;
		}
		cin >> e;
		// calculate and display b^e
		cout << power(b, e) << endl;
	}
} // end main


unsigned long power(unsigned long x, unsigned long y) {
	unsigned long c;
	unsigned long d=1;
	for (int i = 1; i <= y; i++) {
		c = d;
		d = c * x;
		
		
		}
	return d;
				
}
int calculatePower(int base, int powerRaised)
{
	if (powerRaised != 0)
		return (base * calculatePower(base, powerRaised - 1));
	else
		return 1;
}