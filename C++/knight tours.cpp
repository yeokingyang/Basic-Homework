#include <iomanip>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define N 8 


static int cx[N] = { 1,1,2,2,-1,-1,-2,-2 };
static int cy[N] = { 2,-2,1,-1,2,-2,1,-1 };

bool limits(int x, int y)
{
	return ((x >= 0 && y >= 0) && (x < N && y < N));
}


bool isempty(int a[], int x, int y)
{
	return (limits(x, y)) && (a[y * N + x] < 0);
}


int getDegree(int a[], int x, int y)
{
	int count = 0;
	for (int i = 0; i < N; ++i)
		if (isempty(a, (x + cx[i]), (y + cy[i])))
			count++;

	return count;
}


bool nextMove(int a[], int* x, int* y)
{
	int min_deg_idx = -1, c, min_deg = (N + 1), nx, ny;

	int start = rand() % N;
	for (int count = 0; count < N; ++count)
	{
		int i = (start + count) % N;
		nx = *x + cx[i];
		ny = *y + cy[i];
		if ((isempty(a, nx, ny)) &&
			(c = getDegree(a, nx, ny)) < min_deg)
		{
			min_deg_idx = i;
			min_deg = c;
		}
	}

	// IF we could not find a next cell 
	if (min_deg_idx == -1)
		return false;

	// Store coordinates of next point 
	nx = *x + cx[min_deg_idx];
	ny = *y + cy[min_deg_idx];

	// Mark next move 
	a[ny * N + nx] = a[(*y) * N + (*x)] + 1;

	// Update next point 
	*x = nx;
	*y = ny;

	return true;
}


void print(int a[])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
			cout<< setw(3)<<a[j * N + i];
		printf("\n");
	}
}


bool neighbour(int x, int y, int xx, int yy)
{
	for (int i = 0; i < N; ++i)
		if (((x + cx[i]) == xx) && ((y + cy[i]) == yy))
			return true;

	return false;
}


bool findClosedTour(int sx,int sy)
{
	
	int a[N * N];
	for (int i = 0; i < N * N; ++i)
		a[i] = -1;





	int x = sx, y = sy;
	a[y * N + x] = 1; 


	for (int i = 0; i < N * N - 1; ++i)
		if (nextMove(a, &x, &y) == 0)
			return false;

	
	if (!neighbour(x, y, sx, sy))
		return false;

	print(a);
	return true;
}

// Driver code 
int main()
{
	


	int seed;
	cin >> seed;
	srand(seed);


	
	while (!findClosedTour( 0,  0))
	{
		;
	}

	return 0;
}
