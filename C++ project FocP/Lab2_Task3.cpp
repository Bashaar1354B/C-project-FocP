//By Bashaar Ibrahim Jawad
//Calculating memory needed for any number of accounts to be saved

#include <iostream>
using namespace std;

void main()					//Main function that will be executed and will not return anything
{
	//Declaration
	int acc_num;			//A variable storing the account number of the user
	float tran_ammount;		//A variable storing the transaction ammount from the user
	bool active_stat;		//A variable wether the account is active or not
	char acc_stat;			//A variable storing the status of the account
	double current_balance;	//A variable storing the current balance of the account
	int total_memory;		//A variable storing the total memory of the given number of accounts
	int total_num_acc;		//A variable storing the total number of accounts input by the user
	int memory_of_1_acc;    //A variable storing the total memory occupied by one account
	
	//Output of main info
	cout << "\n\tThe number of bytes occupied by the account number is: " << sizeof(acc_num) << "Byte(s)" << endl;
	cout << "\tThe number of bytes occupied by the transaction ammount is: " << sizeof(tran_ammount) << "Byte(s)" << endl;
	cout << "\tThe number of bytes occupied by the active status of the account  is: " << sizeof(active_stat) << "Byte(s)" << endl;
	cout << "\tThe number of bytes occupied by the account status is: " << sizeof(acc_stat) << "Byte(s)" << endl;
	cout << "\tThe number of bytes occupied by the current balance of the account is: " << sizeof(current_balance) << "Byte(s)" << endl;
	cout << "\n\t------------------------------------------------------------------------------" << endl;
	
	//Calculation of total memory and output of mermory required
	cout << "\n\tWhat is the total number of accounts to be made? ";
	cin >> total_num_acc;
	memory_of_1_acc = sizeof(acc_stat) + sizeof(active_stat) + sizeof(tran_ammount) + sizeof(acc_num) + sizeof(current_balance);
	total_memory = memory_of_1_acc * total_num_acc;		//Multiplying the memory used by one account with number of accounts
	cout << "\tThe total number of bytes occupied by one account is: " << memory_of_1_acc << "Bytes" << endl;
	cout << "\tThe total number of bytes occupied by " << total_num_acc << " account(s) is: " << total_memory << "Bytes" << endl;
}