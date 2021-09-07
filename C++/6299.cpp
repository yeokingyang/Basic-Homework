#include<iostream>
#include<string>

using namespace std;

int main()
{
	int c = 0;
	int num;
	string str;
	int length;
	bool isPalindrome = true;

	cin >> num;
	while (true) {
		
		if (c == num)
			break;

		else {
			cin >> str;
			getline(cin, str);
			cin.ignore;

			length = str.length();

			for (int i = 0; i < (length / 2); i++)
			{
				if (str[i] != str[(length - 1) - i])
					isPalindrome = false;
			}

			if (isPalindrome == true)
				cout << str << " is a palindrome" << endl;

			else
				cout << str << " is not a palindrome" << endl;
		}
		c++;


	}
}