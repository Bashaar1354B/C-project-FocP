//By Bashaar Ibrahim Jawad
//Program to extract the name and price of a list of shopping items with the highest price.

#include <iostream>
using namespace std;

void main()
{
	
	string name = "", nameofmin;			/*"name" variable temporarily stores the name of items input while "nameofmin"
											stores the name of the item with the lowest price.*/
	float price = 0.0, minprice;			/*"price" temporarily stores the price of item entered whereas "minprice" stores
											the price of the item with the lowest price.*/
	int items = 0;							//Takes the number of items and stores it for later use

	cout << "Enter the number of items you have: ";
	cin >> items;

	for (int index = 0; index < items; index++)		//Repeats block of code until index becomes greater than the number of items.
	{	
		cout << "Enter the Name of the item: "; 
		cin >> name;
		cout << "Enter the price of the item: ";
		cin >> price;

		if (index == 0)
			minprice = price;	//initial assignment of "minprice" variable

		if (minprice > price)	//Checking whether the enetered price is greater than the minimum price stored in "minprice".
		{
			minprice = price;	//Stores the value of entered price in "minprice"
			nameofmin = name;	//Stores the value of entered name in "nameofmin"
		}
	}
	cout << "The name of the item with the lowest price of " << minprice << " Dollars is " << nameofmin << endl;
}