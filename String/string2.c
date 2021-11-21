#include<stdio.h>
int main(void)
{

char str []={'I','N','D','I','A','N','\0'};
char *p;
p=str;
while(*p!='\0')
{
    printf("character=%c\t",*p);
    p++;

}

return 0;

}