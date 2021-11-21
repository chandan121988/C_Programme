/* C++ Pointers and Arrays. This C++ program
 * also demonstrates the same concept as the
 * above C++ program shows, but this program
 * demonstrates the address manipulation in
 * two dimensional array in C++ */

#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	//clrscr();
	int arr[3][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15} };
	int* iptr = &arr[0][0];

	cout << "1.-2  *(arr + 0))\t = " << *(arr + 0)  << "\n";
	cout << "1.-1  *(arr + 1)\t = " << *(arr + 1) << "\n";
	cout << "1.0  *(*(arr + 2)+0)\t = " << *(*(arr + 2)+0)  << "\n";
	cout << "1.1  *(*(arr+2)+1)\t = " << *(*(arr + 2) + 1) << "\n";
	cout << "2.0  *(*arr)\t\t = " << *(*arr) << "\n";
	cout << "2.4  *(*arr+2)+5\t\t = " << *(*arr + 2) + 3 << "\n";
	cout << "3.  *(*(arr+1))\t\t = " << *(*(arr + 1)) << "\n";
	cout << "4.  *(*(arr)+2)+1\t = " << *(*(arr)+2) + 1 << "\n";
	cout << "5.  *(*(arr+1)+3)\t = " << *(*(arr + 1) + 3) << "\n";
	cout << "6.  *iptr\t\t = " << *iptr << "\n";
	cout << "7.  *(iptr+2)\t\t = " << *(iptr + 2) << "\n";
	cout << "8.  (*(iptr+3)+1)\t = " << (*(iptr + 3) + 1) << "\n";
	cout << "9.  *(iptr+5)+1\t\t = " << *(iptr + 5) + 1 << "\n";
	cout << "10. ++*iptr\t\t = " << ++ * iptr << "\n";

	//getch();
}