//By Bashaar Ibrahim
//Electricity bill calc
#include <iostream>
using namespace std;
void main()
{
	int units, bill;
	cout << "Input the number of units consumed: ";
	cin >> units;
	if (units <= 100 && units >= 0)
		bill = units * 10;
	if (units <= 200 && units > 100)
		bill = 1000 + (units - 100) * 15;
	if (units > 200)
		bill = 2500 + (units - 200) * 20;
	cout << "The total calculated bill is " << bill << "Rs.";
}
