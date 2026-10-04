//By Bashaar Ibrahim Jawad
//An algorithm to perform bitwise operations on unsigned binary numbers input by the user

#include <iostream>
#include <bitset>			//Found no other way of converting a number into binary so imported this library
using namespace std;

void main()
{
	//Declaring variables to store data input by the user and after operations are performed
	int first_num, second_num;
	int l_shift, r_shift, bwise_AND, bwise_OR, bwise_XOR;

	//Prompting inputs from the user
	cout << "\nType the first number in the range 0-255: ";
	cin >> first_num;
	cout << "\nType the second number in the range 0-255: ";
	cin >> second_num;
	cout << "\n**********************************************************************\n" << endl;

	//Calculation of numbers using bitwise operations
	l_shift = (first_num << 2);					//Left shift, "<<" shifts all binary digits of the first number to the left by 2 spaces
	r_shift = (second_num >> 3);				//Right shift, ">>" shifts all binary digits of the second number to the right by 3 spaces
	bwise_AND = (first_num & second_num);		//Bitwise AND, "&" does the "AND" operation with both the numbers
	bwise_OR = (first_num | second_num);		//Bitwise OR, "|" does the "OR" operation with both the numbers
	bwise_XOR = (first_num ^ second_num);		//Bitwise XOR, "^" does the "XOR" operation with both the numbers

	//Output of calculated denary numbers and their equivalent binary value
	cout << "The result of a left shift on the first value of 2 in denary is \"" << l_shift << "\" and in binary is \"" << bitset<8>(l_shift) << "\"" << endl;
	cout << "\nThe result of a right shift on the second value of 3 in denary is\"" << r_shift << "\" and in binary is \"" << bitset<8>(r_shift) << "\"" << endl;
	cout << "\nThe result of a bitwise AND on the values in denary is \"" << bwise_AND << "\" and in binary is \"" << bitset<8>(bwise_AND) << "\"" << endl;
	cout << "\nThe result of a bitwise OR on the values in denary is \"" << bwise_OR << "\" and in binary is \"" << bitset<8>(bwise_OR) << "\"" << endl;
	cout << "\nThe result of a bitwise XOR on the values in denary is \"" << bwise_XOR << "\" and in binary is \"" << bitset<8>(bwise_XOR) << "\"" << endl;
}

