/* C++ Pointers - Example Program of C++ Pointers */

#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	//clrscr();

	int arra[] = { 11, 22, 33, 44, 55 };
	int a,d;
	int* ptra;
	ptra = arra;
	d=(*ptra)+1;
	a = d;
	*ptra = (*ptra) + 1;
	cout << "*ptra = " << *ptra << "\n";
	cout << "a = " << a << "\n\n";

	int arrb[] = { 11, 22, 33, 44, 55 };
	int b;
	int* ptrb;
	ptrb = arrb;
	b = (*ptrb)++;
	cout << "*ptrb = " << *ptrb << "\n";
	cout << "b = " << b << "\n\n";

	int arrc[] = { 11, 22, 33, 44, 55 };
	int c;
	int* ptrc;
	ptrc = arrc;
	c = *++ptrc;
	cout << "*ptrc = " << *ptrc << "\n";
	cout << "c = " << c << "\n\n";

	//getch();
}