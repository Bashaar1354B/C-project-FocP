//By Bashaar Ibrahim
//Program to get grade from marks
#include <iostream>
using namespace std;

void main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 70)                        //Checking wether marks are greater than 70
    {
        cout << "The grade for " << marks<< "marks is an A" << endl;
    }
    else if (marks >= 60 && marks < 70)     //Checking wether marks are greater than 60 and less than 70
    {
        cout << "The grade for " << marks << "marks is a B+" << endl;
    }
    else if (marks >= 50 && marks < 60)     //Checking wether marks are greater than 50 and less than 60
    {
        cout << "The grade for " << marks << "marks is a B" << endl;
    }
    else if (marks >= 40 && marks < 50)     //Checking wether marks are greater than 40 and less than 50
    {
        cout << "The grade for " << marks << "marks is a C" << endl;
    }
    else                                    //All other marks are counted as an F
    {
        cout << "The grade for " << marks << "marks is an F" << endl;
    }
}