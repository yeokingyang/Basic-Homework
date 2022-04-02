//20196999051 - Yeo King

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;

	while (true) {
		cout << "Input :   ";
		getline(std::cin, str);


		for_each(str.begin(), str.end(), [](char& c) {
			static int last = ' ';
			if (last == ' ' && c != ' ' && ::isalpha(c))
				c = ::toupper(c);
			else
				c = ::tolower(c);
			last = c;
			
			});
		cout << "Output :   " << str << std::endl;
	}
}