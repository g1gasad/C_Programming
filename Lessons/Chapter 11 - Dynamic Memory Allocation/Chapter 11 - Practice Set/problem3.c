#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 7, size = 10, m = 5;
    int *ptr;
    int user;
    ptr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    for (int j = 0; j < size; j++)
    {
        printf("Value %d is: %d\n", j + 1, ptr[j]);
    }

    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = size; i < 15; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("\n");
    for (int j = 0; j < 15; j++)
    {
        printf("Value %d is: %d\n", j + 1, ptr[j]);
    }

    return 0;
}