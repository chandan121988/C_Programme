/* C++ Pointers and Structures. This C++ program
 * also demonstrates the structure pointer in C++ */

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct emp
{
    int empno;
    char empname[20];
    float empbasic;
    float empexperience;
};
void display(emp* e);
void increase(emp* e);
void main()
{
    //clrscr();
    emp mgr, * eptr;
    cout << "Enter employee number: ";
    cin >> mgr.empno;
    cout << "Enter name: ";
    //gets(mgr.empname);
    strcpy_s(mgr.empname,"hritik");
    cout << mgr.empname <<"\n";
    cout << "Enter basic pay: ";
    cin >> mgr.empbasic;
    cout << "Enter experience (in years): ";
    cin >> mgr.empexperience;
    eptr = &mgr;
    cout << "\nEmployee details before increase()\n";
    display(eptr);
    increase(eptr);
    cout << "\nEmployee details after increase()\n";
    display(eptr);
    //getch();
}
void display(emp* e)
{
    int len = strlen(e->empname);
    cout << "Employee number: " << e->empno;
    cout << "\nName: ";
    cout.write(e->empname, len);
    cout << "\tBasic: " << e->empbasic;
    cout << "\tExperience: " << e->empexperience << " years\n";
}
void increase(emp* e)
{
    if (e->empexperience >= 5)
    {
        e->empbasic = e->empbasic + 15000;
    }
}