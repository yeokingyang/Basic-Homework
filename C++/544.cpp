#include <iostream>
using namespace std;

class Addition {

private:
	int x, y;
public:
	int a, b;
	void add(a,b){
		x = a;
	
		y = b;
	}

	int showAddition() { return x + y };
};






int main() {
	int a, b;
	cin >> a >> b;
	Addition add(a, b);
	cout << add.showAddition() << endl;
}