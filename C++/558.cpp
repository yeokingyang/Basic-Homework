#include <iostream>
using namespace std;

int main()
{
	
	int largest2 = 0;
	int largest = 0;
	int a=0 ;
	int i = 1;
	

	while (a >= 0) {
		i = 1;
	
		for (i=1; i <=10; i++) {
			cin >> a;

			if (a == -1) {
				return 0;
			}
			else {
			

				if (a > largest) {
					largest2 = largest;
					largest = a;
				}
				else if(a>largest2){
					largest2 = a;

				}
			}

			


		}
		
			cout << "Largest is " << largest << endl;
			cout << "Second largest is " << largest2 << endl;
			largest = 0;
			largest2 = 0;
		
	}


}
