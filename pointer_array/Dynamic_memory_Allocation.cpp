#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()

{
    int n, avg, sum = 0, *ptr, i = 0;
    ptr = (int *)malloc(n * sizeof(int));
    cout<< "enter totalno. of students:" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin>> ptr[i];
       // or scanf("%d", (ptr + i));
    }
    for (i = 0; i < n; i++)
    {
        
        sum = sum + *(ptr + i);
    }
    avg = sum / n;
    printf("Average marks=%d", avg);
    return 0;
}