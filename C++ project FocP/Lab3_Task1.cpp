//By Bashaar Ibrahim
//Even or odd num checker and divisibility checker
#include <iostream>
using namespace std;

void main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (num > 0)	//Checks wether the number input is positive or not 
	{
		//Modulus returns the remainder, either "1" for odd or "0" for even
		if ((num % 2) == 0)	//If the modulus result is "0" the following program is executed without going into the else block
		{
			cout << "The number \"" << num << "\" is an even number." << endl;
			if ((num % 4) == 0)			//Checking wether the number is divisible by 4
			{
				cout << "The number \"" << num << "\" is divisible by 4." << endl;
			}
			if ((num % 6) == 0)			//Checking wether the number is divisible by 6
			{
				cout << "The number \"" << num << "\" is divisible by 6." << endl;
			}	
		}
		else      //If the modulus result is "1" the following program in the else block is executed
		{
			cout << "The number \"" << num << "\" is an odd number." << endl;
			if ((num % 3) == 0)			//Checking wether the number is divisible by 3
			{
				cout << "The number \"" << num << "\" is divisible by 3." << endl;
			}
			if ((num % 5) == 0)			//Checking wether the number is divisible by 5
			{
				cout << "The number \"" << num << "\" is divisible by 5." << endl;
			}
		}
	}
}