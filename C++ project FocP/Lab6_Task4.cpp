//By Bashaar Ibrahim
//Program for a number guessing game
#include <iostream>
#include <math.h>	//This header file is not required to use the functions "rand()" or "srand(n)" but is better to have it
using namespace std;
void main()
{
	srand(time(0));	//"srand(time(0))" changes the seed of the "rand()" function using the currrent time, introducing more randomness
	int num = 0, guess;		//"num" stores the randomly generated number and "guess" stores the guess of the user
	bool iscorrect = false;	//This is used as a check to exit the loop
	num = 1 + rand() % 100;	//"1" is the lower bound of the range and "100" is the upper bound of the randomly generated number
	cout << "A random number was chosen from 1-100." << endl;
	do		//This is a do-while function which runs atleast once and end when the condition at the end is not met
	{
		cout << "Guess the number: ";
		cin >> guess;
		if (guess == num)	//if the guess of the user is equal to the random value then the following block of code is executed
		{
			iscorrect = true;	//The check becomes true
			cout << "You are correct! " << endl;
		}
		else	//if the guess of the user is not equal to the random generated value, this block is executed
		{
			if (guess < num)	//Checks whether guess is less than random generated value and gives the hint
				cout << "Incorrect! Your guess is smaller than the random number." << endl;
			else				//Otherwise it says that random value is smaller than guess
				cout << "Incorrect! Your guess is larger than the random number." << endl;
		}
	} while (iscorrect == false);	//once "iscorrect" is "true" the loop is exited
}