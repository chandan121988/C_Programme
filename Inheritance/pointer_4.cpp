/* C++ Pointers - Example Program of C++ Pointers */

#include<iostream>
#include<conio.h>
void fun(int, int*);
using namespace std;
void main()
{
    system("cls");
    int arr[5] = { 2, 4, 6, 8, 10 };
    int i, b = 5;
    for (i = 0; i < 5; i++)
    {
        fun(arr[i], &b);
        cout << arr[i] << "\t" << b << "\n";
    }
    //getch();
}
void fun(int x, int* y)
{
   
    *y = *y + 2;
    x = *y + 2 ;
}