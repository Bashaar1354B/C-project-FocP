//By Bashaar Ibrahim
//Program to calculate the total ammount owed by the customer in the store

#include <iostream>
using namespace std;

int main()
{

	int product_num, purchase_amm;
	float  total_owed, retail_price = 0;

	cout << "Input the product number: ";
	cin >> product_num;
	cout << "Input the number of products bought by the customer: ";
	cin >> purchase_amm;

	switch (product_num)		//The "switch" is a selection statement allowing to move to a line where a case is true
	{
	case 1:
		retail_price = 2.98;
		break;					//Break keywords tell the program to exit the "switch" block of the code
	case 2:
		retail_price = 4.50;
		break;
	case 3:
		retail_price = 9.98;
		break;
	case 4:
		retail_price = 4.49;
		break;
	case 5:
		retail_price = 6.87;
		break;
	default:					//If none of the cases are true, the "default" block of code is executed
		cout << "Invalid Product Number" << endl;
		break;
	}
	if (retail_price != 0)		//Checks wether the user has input a valid product number
	{
		total_owed = (retail_price * purchase_amm);
		if (purchase_amm > 5)		//Checking if the purchase ammount exceeds 5
		{
			total_owed = total_owed - total_owed * (10 / 100);		//Applying a 10% discount
		}
		cout << "The customer owes " << total_owed << " Dollars." << endl;
	}
}