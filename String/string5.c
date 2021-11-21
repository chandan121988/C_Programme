#include<stdio.h>
#include<string.h>
int main(void)
{
  char str[30];
  printf("enter the string:");
  gets_s(str);
  printf("length of the string is: %u\n",strlen(str));
  return 0;
}
