#include <iostream> 
#include <array>

using namespace std;

const int SIZE = 30;

void printArray(array< int, SIZE>& , size_t, size_t);



int main()
{

	array< int, SIZE > values = {};
	unsigned int i = 0;
	while (i < SIZE) {
		int value = 0;
		cin >> value;
		values[i++] = value;
	}
	printArray(values, 0, SIZE - 1);
	cout << endl;
} // end main
void printArray(array< int, SIZE>&values, size_t a, size_t b) {
	if (a <= b) {
		cout << values[a] << " ";
		printArray(values, a + 1, b);
	}

}

