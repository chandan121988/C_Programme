/* C++ Pointers and Functions. This C++ program
 * demonstrates about invoking the functions by
 * passing the pointers in C++ */

#include<iostream>
#include<conio.h>
using namespace std;
void swap(int* x, int* y);
void main()
{
	//clrscr();
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "\nOriginal Values\n";
	cout << "a = " << a << " and b = " << b << "\n";
	swap(&a, &b);
	cout << "\nSwapped Values\n";
	cout << "a = " << a << " and b = " << b << "\n";
	//getch();
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}