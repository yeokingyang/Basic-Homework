#include <iostream>
using namespace std;


int main( void )
{
      const int MAX = 30;  
	  int a[ MAX ] = { 0 }; 
      int i; 
      int j; 
      int k = 0; 
      int duplicate; 
      int value;


		  for (i = 0; i <= MAX - 1; i++)
		  {
			  duplicate = 0;
			  cin >> value;
			
			  if (value >= 1 && value <= 1000)
			  {
				  for (j = 0; j < k; j++)
				  {


					  if (value == a[j])
					  {
						  duplicate = 1;
						  break;
					  }

				  }
				  if (!duplicate)
				  {
					  a[k++] = value;
				  }
			  }
		  }

		  for (i = 0; a[i] != 0; i++)
		  {
			  cout << a[i] << " ";
		  }
		  cout << "\n";	  
} 
