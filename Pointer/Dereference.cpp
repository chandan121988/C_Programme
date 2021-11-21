#include<iostream>
using namespace std;
int main()

{
    int a=10;
    int *ptr;
    ptr=&a;
    *ptr=*ptr+a;
    cout<<"the value of a is:"<<a<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
}
