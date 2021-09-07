#include <iostream>


using namespace std;

int main()
{

	int n;
	int countera=0;
	while (true) {
		cin >> n;
		if (n == -1)
			break;
		for (int i = 1; i <= n; i++)
		{


			for (int a = i; a <= n; a++)
			{


				for (int c = 1; c <= n; c++)
				{

					int hypot = c * c;
					int side1 = i * i;
					int side2 = a * a;

					if (hypot == (side1 + side2))
					{
						countera = countera + 1;
						cout << i << "\t" << a << "\t" << c <<endl;

				
					}
					
			
					
				}
			}
			
		}
		cout << "A total of " << countera << " triples were found." << endl;
		countera = 0;
	}
}