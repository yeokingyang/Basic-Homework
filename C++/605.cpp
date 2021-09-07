#include <iostream> 
using namespace std;



int gcd(int x, int y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);

}


int main()
{
	int a, b;
	while (true) {
		cin >> a;
		if (a == 0)
			break;
		cin >> b;
		cout << gcd(a, b)<<endl;
		
	}
}