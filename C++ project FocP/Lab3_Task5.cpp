//By Bashaar Ibrahim
//Program to classify a character input by the user
#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "Input a character to classify: ";
	cin >> ch;
	/* The if - else - if statements check wether the character input
	has an ASCII value between the character range ASCII values */
	if (ch >= 'a' && ch <= 'z')
	{
		cout << "The character \"" << ch << "\" is a lowercase letter" << endl;
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		cout << "The character \"" << ch << "\" is an uppercase letter " << endl;
	}
	else if (ch >= '0' && ch <= '9')
	{
		cout << "The character \"" << ch << "\" is a number " << endl;
	}
	else       //All other characters are special character
	{
		cout << "The character \"" << ch << "\" is a special character " << endl;
	}
}