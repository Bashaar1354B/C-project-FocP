//By Bashaar Ibrahim
//Program to calculate the harmonic mean till N values with X1 = 1, X2 = 2, X3 = 3, X4 = 4......, XN = N

#include <iostream>
using namespace std;

void main()
{
	int N = 0;		//Stores the number of items of which to calculate the harmonic mean of   
	float Hmean, div = 0.0, count = 0;	/*"Hmean" stores the value of the harmonic mean, "Div" stores the 
										value of the divisor in the harmonic mean formula, "count"*/
	
	cout << "Input the number to calculate the harmonic mean of: ";
	cin >> N;

	do		//Repeats atleast once until the later condition is false
	{
		count++;
		div = div + (1 / count);	//Finding the value of the divisor in the harmonic mean formula
	}while (count <= N - 1);		//Condition to exit code if false
	
	Hmean = N / div;		 //Calculating Harmonic mean by dividing N by the divisor calculated previously
	
	cout << "The harmonic mean of N = "<< N << " is " <<Hmean<< "." << endl;
}