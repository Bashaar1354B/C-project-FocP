#include <iostream>
using namespace std;
void main()
{
	bool IsPrime = true;	//This a check variable to see whether or not the number is a prime
	int num, count, val;	//val is the divident of the number
	cout << "Enter the amount of numbers you will enter: ";
	cin >> count;			//Store the number of primes the user will enter
	for (;count >= 1; count--)	//This loop will run the number of times entered by the user only if there are no primes entered.
	{
		cout << "Enter the positive integer to check: ";
		cin >> num;			//Taking the number from the user
		val = num / 2;		/*No number can be divided without a remainder by a dividant greaterthan half the number, so to
							make the program more efficient, the number is halved*/
		do					//Runs until the condition becomes false
		{
			if (num % val == 0 || num == 1)	//If the number is found to be divided by a smaller number, and the number is 1, the code is executed.
			{
				IsPrime = false;	//The check is set to false
				break;				//We escape the do-while loop block
			}
			val--;			//Decrementing the value by 1
		} while (val > 1);	//If the statement is not exited by "break" it will run till val = 1
		if (val == 1 || num == 2 || num == 3)	//2 and 3 anre primes and if the val is 1 it means the number is a prime number
		{
			cout << "The number " << num << " is a prime number." << endl;
			IsPrime = true;	//Setting the check to true
			break;			//If the prime number is found, The outer "for" loop is exited
		}
	}
	if (IsPrime == false)	//If the check is false, this block is executed
		cout << "There was no prime number entered." << endl;
}