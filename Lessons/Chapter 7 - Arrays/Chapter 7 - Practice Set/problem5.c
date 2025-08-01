#include <stdio.h>
int arrDisplay(int arr[], int size)
{
    printf("the array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int arr[11] = {4, 6, 111, 9, 7, -5, 23, 69, 0, -77, 619};
    int *ptr = arr;
    arrDisplay(arr, 11);
    reverse(arr, 11);
    arrDisplay(arr, 11);
    return 0;
}