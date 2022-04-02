//201969990051 - Yeo King

#include<iostream>
#include <iomanip>
using namespace std;

class Students
{
	int roll_no;
	int mark1,mark2,mark3;
	int totalmark;
	bool check =true;
	string name;
public:
	void get_data(Students*)
	{
		cin >> name;
		cin >> roll_no;
		cin >> mark1>>mark2>>mark3;
		totalmark = mark1 + mark2 + mark3;
	}

	void display(Students*)
	{
		cout << "\n " << name << "\t " <<setfill('0')<<setw(6)<< roll_no << "\t" << mark1<<" "<<mark2<<" "<<mark3 << endl;
	}

	static void Sortbyroll(Students* ptr, int n);

	static void Sortbyscore(Students* ptr, int n);
};

void Students::Sortbyscore(Students* ptr, int n)
{
	Students temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ptr[i].totalmark < ptr[j].totalmark)
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
			else if (ptr[i].totalmark = ptr[j].totalmark)
			{

				if (ptr[i].roll_no > ptr[j].roll_no)
				{
					temp = ptr[i];
					ptr[i] = ptr[j];
					ptr[j] = temp;
				}
			}
		}
	}
}

int main()
{
	int n;
	cout << "\nInput : \n";
	cin >> n;
	Students* ptr = new Students[n];
	for (int i = 0; i < n; i++)
	{
		ptr[i].get_data(ptr);
	}

	cout << "\nOutput : \n";
	
	Students::Sortbyscore(ptr, n);
	for (int i = 0; i < n; i++)
		ptr[i].display(ptr);
	cout << endl;
	delete[]ptr;
	return 0;
}
