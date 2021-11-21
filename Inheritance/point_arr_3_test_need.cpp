/* C++ Pointers and Arrays. Pointers and Strings */

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void main()
{
	//clrscr();
	const char* names[] = { "Sachin", "Dhoni", "Sehwag", "Raina", "Yuvraj" };
	int len = 0;
	len = strlen(names[1]);   // length of 2nd string
	cout << "Originally:\n\tstring 2 is ";
	//cout.write(names[1], len).put('\n');
	cout << names[1];
	cout << "\tand string 4 is ";
	cout.write(names[3], len).put('\n');

	// now exchange the position of string 2 and 4
	const char* tptr;
	tptr = names[1];
	names[1] = names[3];
	names[3] = tptr;

	// now print the exchanged string
	cout << "\nExchanged:\n\tstring 2 is ";
	cout.write(names[1], len).put('\n');
	cout << "\tand string 4 is ";
	cout.write(names[3], len).put('\n');

	//getch();
}