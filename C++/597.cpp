#include<iostream>
#include <iomanip> 
#include <algorithm>
using namespace std;

void Fill_array(double[], int);
void Show_array(double[], int);
void Reverse_array(double[], int);

int main() {
	cout << fixed << setprecision(2);
	double a[10];
	Fill_array(a, 10);
	Show_array(a, 10);
	Reverse_array(a, 10);
	Show_array(a, 10);
	return 0;
}

void Fill_array(double a[], int b) {


	for (int i = 0; i < b; i++)
	{	
			cin >> a[i];
		
	}
}
void Show_array(double a[], int b) {
	for (int i = 0; i < b; i++) {
		cout << a[i]<<" ";
	}
	cout << endl;
}

void Reverse_array(double a[], int b) {
	for (int low = 0, high = b - 1; low < high; low++, high--) {
		swap(a[low], a[high]);
	}
}
