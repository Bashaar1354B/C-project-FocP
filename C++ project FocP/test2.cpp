#include <iostream>
using namespace std;
void main()
{
	srand(time(0));
	cout << 1 + rand() % 10;
}