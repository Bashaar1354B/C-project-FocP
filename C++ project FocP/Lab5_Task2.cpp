#include <iostream>
using namespace std;
void main()
{
	cout << "Pattern A\n*********" << endl;
	for (int column = 1; column <= 6; column++)
	{
		for (int num = 1; num <= 6; num++)
		{
			if (column == 1 || column == 6)
			{
				cout << num;
			}
		}
		if (column != 1 && column != 6)
		{
			cout << "1    6";
		}
		cout << endl;
	}
	cout << endl;
//----------------------------------------------------
	int count = 1, space = 8;
	cout << "Pattern B\n*********" << endl;
	for (int column = 1; column <= 5; column++)
	{
		for (int i = 1; i <= space; i++)
		{
			cout << " ";
		}
		space -= 2;
		for (int row = 1; row <= count;row++)
		{
			cout << row << " ";
		}
		cout << endl;
		count += 2;
	}
	cout << endl;
//----------------------------------------------------
	space = 6;
	cout << "Pattern C\n*********" << endl;
	for (int column = 1; column <= 5; column++)
	{
		if(column <= 3)
		{
			space -= 2;
			for (int i = 1; i <= space; i++)
			{
				cout << " ";
			}
			for (int num = 1; num <= column; num++)
			{
				cout << "3 ";
			}
			cout << endl;
		}
		else
		{
			space += 2;
			for (int i = 1; i <= space; i++)
			{
				cout << " ";
			}
			for (int num = 5 - column; num >= 0; num--)
			{
				cout << "3 ";
			}
			cout << endl;
		}
	}
	cout << endl;
//---------------------------------------------------
	space = 10;
	cout << "Pattern D\n*********" << endl;
	for (int column = 1; column <= 6; column++)
	{
		for (int i = 1; i <= space; i++)
		{
			cout << " ";
		}
		space -= 2;
		for (int num = 1; num <= column; num++)
		{
			cout << num << " ";
		}
		cout << endl;
	}
}