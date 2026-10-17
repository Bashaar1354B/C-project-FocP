//By Bashaar Ibrahim
//Program to print a staircase of numbers
#include <iostream>
using namespace std;
void main()
{
	int space = 10;		//This Variables dictates the number of spaces to be printed at the beggining of each line
	cout << "Pattern D\n*********" << endl;
	for (int row = 1; row <= 6; row++)		//Controls the number of rows of the staircase
	{
		for (int i = 1; i <= space; i++)	//Printing specific number of spaces at the beginning of each line
		{
			cout << " ";
		}
		space -= 2;		//For each new line, number of spaces decrement by 2
		for (int num = 1; num <= row; num++)//Loop to print the numbers in each staircase
		{
			cout << num << " ";
		}
		cout << endl;	//To start a new line
	}
}