#include <iostream>
using namespace std;

unsigned int fibonacci(unsigned int); // function prototype

int main()
{
	unsigned int max_counter;
	while (true) {
		cin >> max_counter;
		if (max_counter == 0) {
			break;
		}
		cout << fibonacci(max_counter) << endl;
	}
} // end

unsigned int fibonacci(unsigned int x) {
	int a = 1, b = 1;
	for (int i = 3; i <= x; i++) {
		int c = a + b;
		a = b;
		b = c;
	}
	return b;
}
