#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	double monthlyPayment = 1345.4567;
	double totalPayment = 866.887234;
	cout << setprecision(7);		//The first set precision without "fixed" changes the significant figures to 7 of the following outputs
	cout << monthlyPayment << endl;	//The output has 7 significant figures
	cout << totalPayment << endl;	//The output has 7 significant figures
	cout << fixed << setprecision(2);	//"fixed" fixes the decimal so, "setprecision(n)" only changes the dicmal place of the values being displayed
	cout << setw(8) << monthlyPayment << endl;	//"setw(n)" specifies the total width(n) of the line printed where "setw(n)" is written
	cout << setw(8) << totalPayment << endl;
	cout << left;	//"left" shifts the output to the far left of the field set by the "setw(n)"
	cout << setw(8) << monthlyPayment << endl;	//"setw(n)" specifies the field width and because of "left" the line is printed to the far left of the field 
	cout << setw(8) << totalPayment << endl;
	cout << right;	//"right" shifts the output to the far right of the field set by the "setw(n)"
	cout << setw(8) << monthlyPayment << endl;	//"setw(n)" specifies the field width and because of "right" the line is printed to the far right of the field
	cout << setw(8) << totalPayment << endl;
}