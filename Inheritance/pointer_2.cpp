/* C++ Pointers - Example Program of C++ Pointers */

#include<iostream>
#include<conio.h>
using namespace std; 
void main()
{
	//clrscr(); not working here
	float a=15;
	float* b, * c;
	b = &a;
	c = b;
	cout << "Statements:\n";
	cout << "\tfloat a = 5.999;\n\tfloat *b, *c;\n";
	cout << "\tb = &a\n\tc = b\n\n";

	cout << "Output:\n\t";
	cout << "a = " << a << "\n\t";
	cout << "*(&a) = " << *(&a) << "\n\t";
	cout << "*b = " << *b << "\n\t";
	cout << "*c = " << *c << "\n";
	//getch();
}