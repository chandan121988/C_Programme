/* C++ Pointers and Functions. This C++ program
 * demonstrates about functions returning
 * pointers in C++ */

#include<iostream>
#include<conio.h>
using namespace std;
int* biger(int&, int&);
void main()
{
    //clrscr();
    int num1, num2, * c;
    cout << "Enter two integers\n";
    cin >> num1 >> num2;
    c = biger(num1, num2);
    cout << "The bigger value = " << *c;
    //getch();
}
int* biger(int& x, int& y)
{
    if (x > y)
    {
        return(&x);
    }
    else
    {
        return(&y);
    }
}