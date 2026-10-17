#include <iostream>
#include <string>
using namespace std;
void Pyramid1()		//Simple pyramid of "*"
{
	int row;
	cout << "Enter the number of rows of the pyramid: ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int n = row - i - 1; n >= 0; n--)
		{
			cout << " ";
		}
		for (int k = i; k >= 0;k--)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void Pyramid2()		//Inverted simple pyramid of "*"
{
	int row;
	cout << "Enter the number of rows of the pyramid: ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int n = 0; n <= i; n++)
		{
			cout << " ";
		}
		for (int k = 1; k <= row - i; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void Pyramid3()		//Simple pyramind connected to an inverted pyramid at the bottom
{
	int row;
	cout << "Enter the number of rows of the pyramid: ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int n = row - i - 1; n >= 0; n--)
		{
			cout << " ";
		}
		for (int k = i; k >= 0;k--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 1; i < row; i++)
	{
		for (int n = 0; n <= i; n++)
		{
			cout << " ";
		}
		for (int k = 1; k <= row - i; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
void Pyramid4()		// Pascal's Triangle
{
	int row, num1, num2, index;
	string CurrLine, PrevLine, num = "", temp;
	bool check1 = false, check2 = false;
	cout << "Enter the number of rows of the pyramid: ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		check1 = false;
		check2 = false;
		num = "";
		CurrLine = "";
		CurrLine += "1 ";
		if (i > 1)
		{
			for (int m = 0; m < PrevLine.length(); m++)
			{
				temp = string(1, PrevLine[m]);
				if (check1 == false)
				{
					if (temp == " ")
					{
						num1 = stoi(num);
						num = "";
						check1 = true;
					}
					else
					{
						num += temp;
					}
				}
				else
				{
					if (temp == " ")
					{
						num2 = stoi(num);
						num = "";
						check2 = true;
					}
					else
					{
						num += temp;
					}
				}
				if (check1 && check2)
				{
					index = num1 + num2;
					CurrLine += to_string(index) + " ";
					num1 = num2;
					num = "";
					check2 = false;
				}
			}
		}
		if (i > 0)
		{
			CurrLine += "1 ";
		}
		PrevLine = CurrLine;
		cout << CurrLine << endl;
	}
}

void k()
{ 
	Pyramid3();
}