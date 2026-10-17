//By Bashaar Ibrahim
//Program to output a grid of coordinates
#include <iostream>
using namespace std;
void main()
{
	for (int row = 0;row <= 5;row++)		//This loop controls the Numbers in the Rows
	{
		for (int column = 0;column <= 5; column++)		//This loop controls the Numbers in the Columns
		{
			cout << "(" << row << "," << column << ") ";	/*Uses the number from the outer loop and the inner loop to
															print One set of coordinates in the grid, this is repeated 
															until one complete row is made.*/
		}
		cout << endl;	//This takes to a new line to print the next set of coordinates in the row
	}
}