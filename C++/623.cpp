#include <iostream>
using namespace std;
int factorial(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main() {
	int n, r, result;
	while (true) {
		cin >> n;
		if (n == -1)
			break;
		cin >> r;
		result = factorial(n) / (factorial(r) * factorial(n - r));
		cout << result<<endl;
	}
	
}