#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int num[] = {12, 23, 34, 45, 67};
    int *p, i = 0;
    p=num; //or &num[0]
    for (i = 0; i < 5; i++)
    {
        cout << "address:" << p << "value:" << *p << endl;
        p++;
    }
    return 0;
}
