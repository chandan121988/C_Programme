/* C++ Pointers - Example Program of C++ Pointers */

#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
    //clrscr();
    int arr[] = { 4, 6, 10, 12 };
    int* ptr;
    int i;
    ptr = arr;
    for (i = 0; i < 3; i++)
    {
        cout << *ptr << " -> ";
        ptr++;
    }
    cout << "\n";
    for (i = 0; i < 4; i++)
    {
        (*ptr) *= 3;
        --ptr;
    }
    for (i = 0; i < 4; i++)
    {
        cout << arr[i] << " -> ";
    }
   // getch();
   
}