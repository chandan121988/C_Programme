/* C++ Pointers - Example Program of C++ Pointers */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void check(int, int*);
void main()
{
	//clrscr();
	system("CLS");
	int a = 6, b = -4;
	cout << "Before:\t";
	cout << a << "\t" << b << "\n\n";
	check(a, &b);
	cout << "After:\t";
	cout << a << "\t" << b;
	//getch();
}
void check(int x, int* y)
{
	x = x * x;
	*y = *y * *y;
	cout << "In:\t";
	cout << x << "\t" << *y << "\n\n";
}