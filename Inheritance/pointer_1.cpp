/* C++ Pointers - Example Program of C++ Pointers */

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	//clrscr();
	system("CLS");
	int num = 20;
	int val;
	int* iptr;

	iptr = &num;
	val = *iptr;
	cout << "Statements:\n";
	cout << "\tint num=20;\n\tint val;\n\tint *ptr;";
	cout << "\n\tiptr = &num;\n\tval = *iptr\n\n";
	cout << "Output:\n";
	cout << "\tnum = " << num << "\n\tval = " << val;

	
	return 0;
	//getch();
}