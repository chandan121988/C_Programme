#include<iostream>
using namespace std;
int main()
{
    int a, *ptr1;
    ptr1=&a;

    cout<< "address of a:"<< "\n"<<ptr1<<endl;
    cout<<ptr1+1<<endl;;
    cout<<ptr1+2<<endl;
    return 0;
}