#include <iostream>
using namespace std;
#include<string.h>
int main()
{
    char *name[]={"ram","shyam","mohan","chandan"};
    char *temp;
    temp=name[2];
    name[2]=name[3];
    name[3]=temp;
    cout<<"name2="<<name[2]<<"\n"<<"name3="<<name[3];
    return 0;
}
