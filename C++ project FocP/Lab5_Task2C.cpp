//By Bashaar Ibrahim
//Program to print a sideways pyramid of "3"s
#include <iostream>
using namespace std;
void main()
{
	int space = 6;		//Controls how many spaces come at the beginning of each line
	cout << "Pattern C\n*********" << endl;
	for (int row = 1; row <= 5; row++)		//Controls the number of rows printed
	{
		if (row <= 3)			//For the first 3 rows, spaces decrement by 2
			space -= 2;
		else					//For the last 2 rows, spaces increment by 2
			space += 2;
		for (int num = 1; num <= space; num++)		//Printing spaces at the beggining of each row
			cout << " ";
		if (row<= 3)								//Number of 3s increment by 1 for the first 3 rows
		{
			for (int num = 1; num <= row; num++)
			{
				cout << "3 ";						//Printing corresponding 3s
			}
		}
		else										//Number of 3s for the last 2 rows decrement by 1
		{
			for (int num = 5 - row; num >= 0; num--)
			{
				cout << "3 ";						//Printing corresponding 3s
			}
		}
		cout << endl;		//Starting a new line
	}
}