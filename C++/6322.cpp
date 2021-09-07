#include <iostream>
#include <iomanip>
#define N 8

using namespace std;
int sol[N][N];

bool isValid(int x, int y, int sol[N][N]) {     //check place is in range and not assigned yet
	return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == 0);
}

void displaySolution() {
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++)
			cout << setw(3) << sol[x][y];
		cout << endl;
	}
}

int knightTour(int x, int y, int move, int sol[N][N], int xMove[N], int yMove[N]) {
	int xNext, yNext;

	if (move == N * N)     //when the total board is covered
		return true;
	
	int a = rand() % 7;
	for (int k= a; k < 8; k++) {
		xNext = x + yMove[k];
		yNext = y + xMove[k];
		if (isValid(xNext, yNext, sol)) {     //check room is preoccupied or not
			sol[xNext][yNext] = move;
			if (knightTour(xNext, yNext, move + 1, sol, xMove, yMove) == true ) {
				 a =  rand()% 7;
				return true;
			}
			if (knightTour(xNext, yNext, move + 1, sol, xMove, yMove) == false && k == 7) {
				a = 0;
				
			}
			//trying to do . When the conditions of moving are not met(the knight lands off the chessboard or has already visited that square), 
			//try another moveNumber in increasing order. If the current moveNumber is 7 and its conditions are not met, the next moveNumber will be 0.
			else {
			
				return true;
			}
		}
	}
	return false;
}

bool findKnightTourSol() {
	for (int x = 0; x < N; x++)     //initially set all values to -1 of solution matrix
		for (int y = 0; y < N; y++)
			sol[x][y] = 0;
	//all possible moves for knight
	int xMove[8] = { 2, 1, -1, -2, -2, -1,  1,  2 };
	int yMove[8] = { -1, -2,  -2,  -1, 1, 2, 2, 1 };

	sol[0][0] = 1;     //starting from room (0, 0)

	if (knightTour(0, 0, 2, sol, xMove, yMove) == false) {
		cout << "Solution does not exist";
		displaySolution();
	}
	else
		displaySolution();
	return true;
}

int main() {
	int seed;
	cin >> seed;
	srand(seed);

	findKnightTourSol();
}