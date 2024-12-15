#include <stdio.h>

int countEvenPositive(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] > 0) && (arr[i] % 2 == 0))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[7] = {3, 5, -3, 0, 2, -6, 68};
    int result = countEvenPositive(arr, 7);
    printf("the num of even positives is %d.", result);
    return 0;
}