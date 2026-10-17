#include <iostream>
//#include <math.h>
//#include <stdlib.h>
using namespace std;
void main()
{
	srand(time(0));
	int num = 0;
	num = rand() % 10 ;
	cout << num;
}