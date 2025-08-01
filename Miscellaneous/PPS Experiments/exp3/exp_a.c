#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number of your choice: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("The number of digits in 0 is 1.");
    }
    else
    {
        int digits = 0;
        int notzero = num;
        while (notzero)
        {
            notzero = notzero / 10;
            // printf("%d\n", notzero);
            digits++;
        }
        printf("Number of digits in %d is %d.\n", num, digits);
    }
    return 0;
}