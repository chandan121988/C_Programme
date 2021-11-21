#include <stdio.h>
int main(void)
{
    int a = 5;
    char b = 'x';
    float c = 5.5;
    int *pi_a = &a;
    char *pi_b = &b;
    float *pi_c = &c;
    printf("value of pi_a=address of a is %p\n", pi_a);
    printf("value of pi_b=address of b is %p\n", pi_b);
    printf("value of pi_c=address of c is %p\n", pi_c);

     ++pi_a;
     ++pi_b;
     ++pi_c;

    //  pi_a++;
    //  pi_b++;
    //  pi_c++;

    printf("value of pi_a=address of a is %p\n", pi_a);
    printf("value of pi_b=address of b is %p\n", pi_b);
    printf("value of pi_c=address of c is %p\n", pi_c);

return 0;

}