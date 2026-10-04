//By Bashaar Ibrahim
//Program for a number guessing game

#include <iostream>
using namespace std;

void main()
{
	
	int num = 6, guess = 0, count = 1;	/*"num" stores the hardcoded value of the secret number.
										"count" stores the number of guesses the user has taken 
										and "guess" stores the guess value of the user*/ 
	cout << "A number has been chosen, it is between 1 and 10, try and guess it.\nYour guess: ";
	cin >> guess;
	
	while (guess != num)	//Loop which runs the block of code until the user guesses correctly
	{
		count++;			//Counting how many times the user has already guessed
		
		if (num > guess)	//Checking whether the guess is smaller than the secret number
		{
			cout << "Wrong guess, your guess is smaller than the secret number.\nYour guess: ";
			cin >> guess;
		}
		else				//Else the guess is greater than the secret number
		{
			cout << "Wrong guess, your guess is greater than the secret number.\nYour guess: ";
			cin >> guess;
		}
	}
	cout << "You are correct! The number was " << guess << ". It took you " << count << " tries to guess it." << endl;
}