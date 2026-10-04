//By Bashaar Ibrahim Jawad
//Program using a given formula to calculate a value
#include <iostream>
using namespace std;
void main()
{

	int a = 5, b = 3, d = 6;			//Declaring and initialising Integer type variables with numbers used in the question
	float c = 4.5, r = 6.12, Answer;	//Declaring and initialising Float/Decimal type variables with numbers used in the question

	Answer = 4 / (3 * (r + 34)) - 9 * (a + b * c) + (3 + d * (2 + a)) / ((a + b) * d);

	/*	  In c++ the highest of priority are the parenthesis "()" followed
	by multiplication "*" and division "/", having the same priority.
	Then lastly subtraction "-" and summation "+", also at the same priority.
	The higher the priority the earlier the arithematic function is done.	*/

	cout << Answer;