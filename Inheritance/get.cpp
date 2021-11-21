#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int count=0;
    const char ch ;
   
        cout<<"entername"<<endl;
       
       while (ch != '\n')
       {
           cin.get(ch);
           cout.put(ch);
           count++;
       }
return  0;
}