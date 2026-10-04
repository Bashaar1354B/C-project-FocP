//By Bashaar Ibrahim
//ATM withdrawl system
#include <iostream>
using namespace std;
void main()
{
	int acc_bal, withdraw_amm;
	cout << "Input withdrawl ammount: ";
	cin >> withdraw_amm;
	if (withdraw_amm <= 0)
		cout << "Invalid ammount";
	else if (withdraw_amm > acc_bal)
		cout << "Insufficient balance";

}