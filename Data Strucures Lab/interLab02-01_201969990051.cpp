// 201969990051-Yeo King
#include <iostream> 
using namespace std;


int dp[100];
int count = 0;


void print(int index)
{
	for (int i = 1; i < index; i++) {
		cout << dp[i] << " ";
	}
	cout << endl;
}


void solve(int remSum, int maxVal, int index, int& count, int N)
{

	if (remSum == 0) {
		count++;
		return;
	}
	

	for (int i = maxVal; i >= 1; i--) {
		if (i > remSum) {
			continue;
		}
		else if (index == N+1)
			break;
		else if (i <= remSum) {

		
			dp[index] = i;

			solve(remSum - i, i, index + 1, count, N);
		}

	}
}

int main()
{
	bool z=true;
	int i = 0;
	int t;
	int M, count , N;
	while ( z == true) {
		cout << "Input :" << endl;
		cin >> t;
		if (t < 1 || t > 50)
			z = false;
		while (i < t) {
			cin >> M >> N;
			solve(M, M, 1, count=0, N);
			cout << "Output : " << endl;
			cout << count << endl;
			i++;
		}
		break;
	}
}
