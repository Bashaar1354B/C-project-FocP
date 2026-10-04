#include <iostream>
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
void Pyramid4()		//Incomplete
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

	}
}

void main()
{ 
	Pyramid3();
}