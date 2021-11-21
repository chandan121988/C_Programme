#include<stdio.h>
int main (void)
{
    char str[]="india";
    int i;
    for(i=0;str[i]!='\0';i++)
{
    printf("character=%c\t", str[i]);
    printf("address=%p\n",&str[i]);
}
return 0;
}