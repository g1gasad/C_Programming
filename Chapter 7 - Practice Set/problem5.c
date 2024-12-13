#include <stdio.h>

void reverse(int *ptr, int size);
void reverse(int *ptr, int size)
{
}

int main()
{
    int arr[6] = {4, 6, 1, 9, 7, 0};
    int *ptr = arr;
    printf("the array is:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    // reverse(ptr, 5);
    return 0;
}