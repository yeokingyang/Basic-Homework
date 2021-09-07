#include<iostream>


using namespace std;


bool checkPalindrome(string noSpace)
{
	if (noSpace.length() < 2)
	{
		return true;
	}
	if (noSpace[0] != noSpace[noSpace.length() - 1])

	{

		return false;

	}

	string substring = noSpace.substr(1, noSpace.length() - 2);

	if (!checkPalindrome(substring))

	{
		return false;
	}
	return true;
}

string removeSpaces(string input)
{
	int length = input.length();
	for (int i = 0; i < length; i++) {
		if (input[i] == ' ')
		{
			input.erase(i, 1);
			length--;
			i--;
		}
	}
	return input;
}

int main()
{
	int c = 0;
	int num;
	string str;
	string noSpace;
	int length;


	cin >> num;
	std::getline(std::cin, str);
	while (true) {

		if (c == num)
			break;

		else {

			std::getline(std::cin, str);

			noSpace = removeSpaces(str);

			length = noSpace.length();

			if (checkPalindrome(noSpace))
				cout << '"' << str << '"' << " is a palindrome" << endl;

			else
				cout << '"' << str << '"' << " is not a palindrome" << endl;
		}
		c++;
	}
}