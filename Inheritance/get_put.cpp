#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int count=0;
    char ch;
   do
    {
        cout<<"entername"<<endl;
       cin.get(ch) ;
       cout.put(ch);
       count++;
    }while(ch!='\n');
return  0;
}