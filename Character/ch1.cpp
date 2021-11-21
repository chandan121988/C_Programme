#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void xstrcpy(char *, char *);
int main()
{
    char str1[30] = "chandan kumar jha";
    char str2[30];
    xstrcpy(str2, str1);

    //printf("value of str2:%s\n", str2);
    cout<<str2<<endl;
    return 0;
}
void xstrcpy(char *t, char *s)
{
    while (*t != '\0')
    {
        *t = *s;
        t++;
        s++;
    }

    *t = '\0';
}
