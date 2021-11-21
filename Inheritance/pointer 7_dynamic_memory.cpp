/* C++ Dynamic Memory Allocation Example Program
 * This is the same program as above, but this
 * program uses two-dimensional array to demonstrates
 * dynamic memory allocation in C++. This C++ program
 * also displays the rowsum and the colsum of the array */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void main()
{
    //clrscr();
    int* val, * rows, * cols;
    int maxr, maxc, i, j;
    cout << "Enter the dimension of the array (row col): ";
    cin >> maxr >> maxc;
    val = new int[maxr * maxc];
    rows = new int[maxr];
    cols = new int[maxc];

    for (i = 0; i < maxr; i++)
    {
        cout << "\nEnter elements for row " << i + 1 << " : ";
        rows[i] = 0;
        for (j = 0; j < maxc; j++)
        {
            cin >> val[i * maxc + j];
            rows[i] = rows[i] + val[i * maxc + j];
        }
    }

    for (j = 0; j < maxc; j++)
    {
        cols[j] = 0;
        for (i = 0; i < maxr; i++)
        {
            cols[j] = cols[j] + val[i * maxc + j];
        }
    }

    cout << "\nThe given array in two dimensional (alongwith rowsum and colsum) is :\n";
    for (i = 0; i < maxr; i++)
    {
        for (j = 0; j < maxc; j++)
        {
            cout << val[i * maxc + j] << "\t";
        }
        cout << rows[i] << "\n";
    }

    for (j = 0; j < maxc; j++)
    {
        cout << cols[j] << "\t";
    }
    cout << "\n";

    //getch();
}