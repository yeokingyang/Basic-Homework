#include <iostream> 
#include <iomanip>
using namespace std;
#define ROLLS 36000

void fill_dice(int dice [7][7]) {

	for (int i = 0; i < 7; ++i) {
		for (int j = 0; j < 7; ++j) {
			dice[i][j] = (i + j);
		}
	}
}

int roll_dice(int dice[7][7]) {
	for (unsigned int i = 1; i <= ROLLS; ++i)
	{
		int x = rand() % 6 + 1;
		int y = rand() % 6 + 1;

		return dice[x][y];
	}
}

int main() {
	int dice[7][7];
	int Total[13] = { 0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int Sum;
	int i;
	float Expected;
	float Actual;
	int seed;
	cin >> seed;
	srand(seed);
	unsigned int x; 
	unsigned int y;

	

	fill_dice(dice);
	for (i = 1; i <= ROLLS; ++i) {
		Sum = roll_dice(dice);
		Total[Sum] += 1;
	}
	cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10) << "Expected" << setw(10) << "Actual" << endl;
	for (i = 2; i < 13; ++i) {
		cout << setw(10) << i << setw(10) << Total[i]; if (i <= 7) {
			Expected = ((i - 1) / 36.0) * 100;
		}
		else {
			Expected = (((12 - i) + 1) / 36.0) * 100;
		}
		cout << setw(9) << fixed << setprecision(3) << Expected<<'%';
		Actual = (Total[i] / (float)ROLLS) * 100;
		cout << setw(9) <<fixed<<setprecision(3)<< Actual<<'%' << endl;

	}
	return 0;
}

