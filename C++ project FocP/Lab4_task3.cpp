//By Bashaar Ibrahim
//Program to calculate the Factorial of a number

#include <iostream>
using namespace std;

void main()
{
	int num = 0;			//"num" stores the number of which to take the factorial
	long int factorial = 1; /*"factorial" stores the end result/answer of the program.
							This is a long int because factorials can give very large integer answers*/
	cout << "Enter the number to calculate the factorial of: ";
	cin >> num;

	for ( int count = num; count >= 1; count-- )	//A loop statement which decrements till 1. This is used to calculate the factorial
	{
		factorial *= count;							//Calculating the factorial using loop counter 
	}
	
	cout << "The factorial of " << num << " is " << factorial << " " << endl;
}