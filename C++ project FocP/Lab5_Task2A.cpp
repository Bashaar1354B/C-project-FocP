//By Bashaar Ibrahim
//Program to output a shape with numbers dictated by the Lab Task
#include <iostream>
using namespace std;
void main()
{
	cout << "Pattern A\n*********" << endl;
	for (int row = 1; row <= 6; row++)		//This loop controls how many Rows of the pyramid are printed
	{
		for (int num = 1; num <= 6; num++)			//This loop controls how many columns of the pattern there are
		{
			if (row == 1 || row == 6)		//The first and last rows are different so an if-else statement is needed to seperate them
			{
				cout << num;				//Printing the pattern in the first and last row
			}
			else							//All the rows excluding the first and last are printed through this block
			{
				if (num == 1 || num == 6)	//First and last digits are printed only
					cout << num;
				else						//Rest of the spaces are filled with a space
					cout << " ";
			}
		}
		cout << endl;						//Going to a new line/row
	}
}