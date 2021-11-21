#include <stdio.h>
int main(void)
{
    int i, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int small, large;
    small = large = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }

    printf("largest number is:  %d\n", large);

    return 0;
}
