//By Bashaar Ibrahim
//Program to calculate the area of a user defined pentagon 
#include <iostream>
#include <math.h>	//This header file enables us to use functions such as "sin(n)", "pow(x, y)" and "tan(n)"
using namespace std;
double AreaofPentagon(double); //Declaring a function called "AreaOfPentagon" with parameter and return datatype

void main()	//Main function
{
	double length = 0.0;	//This variable stores the value input by the user which will be a double because it will be passed to the function
	cout << "Enter the length of the pentagon from the middle to a corner: ";
	cin >> length;
	cout << "The Area of the pentagon is: " << AreaofPentagon(length) << endl;	//Calling of the function with length as an argument and outputting result
}

double AreaofPentagon(double num)	//Defining the previously declared funtion
{
	const double PI = 3.14159;		//Value of "PI" is a constant meaning it does not change its value
	double s = 0.0;					//"s" is defined as a "double" as the inbuilt functions use doubles as their argument
	s = 2 * num * (sin(PI/5));		//calculating s according to the formula given in the Task question
	return ((5 * pow(s, 2)) / (4 * tan(PI / 5)));	//calculating final area as a double and returning it 
}