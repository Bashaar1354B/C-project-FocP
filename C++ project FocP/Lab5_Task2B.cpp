//By Bashaar Ibrahim
//Program to make a simple pyramid using numbers
#include <iostream>
using namespace std;
void main()
{
	int count = 1, space = 8;		/*Count is the variable which tells how many numbers are in a row. Space is the
									variable which dictates the number of spaces at the beginning of each row.*/	
	cout << "Pattern B\n*********" << endl;
	for (int row = 1; row <= 5; row++)		//This loop controls the number of rows in the pyramid
	{
		for (int i = 1; i <= space; i++)	//Loop Controlling the number of Spaces at the beginning of each line
		{
			cout << " ";
		}
		space -= 2;			//Decrementing by 2 a each new line has 2 less spaces
		for (int column = 1; column <= count;column++)	//Loop to print each number in a line
		{
			cout << column << " ";
		}
		count += 2;			//Incrementing by 2 as each new line introduces 2 new numbers
		cout << endl;		//To start a new line
	}
}