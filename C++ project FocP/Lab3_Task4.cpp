//By Bashaar Ibrahim
//Annual bonus calculation according to annual sales

#include <iostream>
using namespace std;

int main()
{
    float sales, bonus;         //Declaring variables

    cout << "Enter annual sales: ";
    cin >> sales;

    if (sales >= 15000)         //Selection statement
    {
        bonus = sales * 0.02;   //Resulting bonus calculation
    }
    else
    {
        bonus = sales * 0.015;  //Resulting bonus calculation
    }
    cout << "Annual bonus: " << bonus << endl;
    return 0;
}