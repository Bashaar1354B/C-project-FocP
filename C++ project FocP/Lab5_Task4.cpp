//By Bashaar Ibrahim
//Program to calculate the average of marks of students input by the user
#include <iostream>
using namespace std;
void main()
{
	int marks;
	float average, count = 0, sum = 0;
	do					//Repeats the block of code until the statement at the end does not become false
	{
		cout << "Enter marks of student: ";
		cin >> marks;
		if (marks < -1 || marks > 100)	//Checks whether the marks input are invalid or not
		{
			cout << "Invalid mark skipped!" << endl;
			continue;					//This brings us back to the starting of the loop without executing the rest of the code
		}
		if (marks != -1)				//Checks if the marks are -1 or not
		{
			sum += marks;				//Sums the valid marks entered by the user
			count++;					//Increments the count which stores the number of valid marks input by the user
		}
	}while (marks != -1);				//Block of code runs until marks entered by the user are -1
	if (count >= 1)						//If there are valid values enetered by the user, the following block of code is executed
	{
		average = sum / count;			//Calculating the average of the values using the sum and dividing it with the number of values enetered.
		cout << "The average of the " << count << " valid numbers input is " << average << "." << endl;
	}
}