/* C++ Pointers and Functions. This C++ program
 * demonstrates about invoking the functions by
 * passing the references in C++ */

#include<iostream>
#include<conio.h>
using namespace std;
void swap(int&, int&);
void main()
{
	//clrscr();
	int a, b;

	cout << "Enter any two numbers: ";
	cin >> a >> b;
	cout << "\nOriginal Values:\n";
	cout << "a = " << a << "\tand\tb = " << b << "\n";
	swap(a, b);
	cout << "\nValues after swapping:\n";
	cout << "a = " << a << "\tand\tb = " << b << "\n";

	//getch();
}
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}