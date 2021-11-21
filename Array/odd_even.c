#include <stdio.h>
#define SIZE 10
int main(void)
{
    int arr[SIZE], i, even = 0, odd = 0;
    for (i = 0; i < SIZE; i++)
    {

        printf("enter the value %d\n", i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }
    printf("even number =%d,oddnumber=%d", even, odd);
    return 0;
}
