#include <iostream>
using namespace std;
void main()
{
	int number, thous, hund, ten, one, sum, product;	//Declaring Datatypes of variables used
	cout << "Enter a four digit number = ";				//Prompting user
	cin >> number;										//Inputting user number into a variable
	thous = number / 1000;								//Extracting thousands place from number
	hund = (number % 1000) / 100;						//Extracting Hundereds place from number
	ten = (number % 100) / 10;							//Extracting Tens place from number
	one = (number % 10);								//Extracting Ones place from number
	sum = thous + hund + one + ten;						//Calculating the sum of the digits 	
	product = thous * hund * one * ten;					//Calculating the product of the digits
	cout << "Thousands place: " << thous << endl;		//Printing the Thousands place
	cout << "Hundereds place: " << hund << endl;		//Printing the Hundereds place
	cout << "Tens place: " << ten << endl;				//printing the Tens place
	cout << "Ones place: " << one << endl;				//printing the Ones place
	cout << "Sum of digits: " << sum << endl;			//printing the sum of the products
	cout << "Product of digits: " << product << endl;	//Printing the product of the digits	
}