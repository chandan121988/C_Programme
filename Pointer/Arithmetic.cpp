#include<iostream>
using namespace std;
int main()
{
    int *ptr,a;
    a=10;
    ptr=&a;
    cout<<ptr<<endl;
    cout<<ptr++<<endl;
    cout<<++ptr<<endl;
    cout<<ptr--<<endl;
    cout<<--ptr<<endl;
    cout<<*ptr+a<<endl;
    cout<<*ptr-a<<endl;
    cout<<*ptr+1<<endl;
    cout<<*ptr-1<<endl;
    return 0;

}
