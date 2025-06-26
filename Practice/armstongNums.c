// An Armstrong number (also called a narcissistic number) is a number
// where the sum of the cubes of its digits is equal to the number itself.
// list all such nums from 1 to 1000
#include <stdio.h>

int main()
{
    int temp, sum, val;
    for (int num = 1; num <= 1000; num++)
    {
        temp = num;
        sum = 0;
        while (temp)
        {
            val = temp % 10;
            sum = sum + (val * val * val);
            temp = temp / 10;
        }
        if (num == sum)
        {
            printf("%d is armstrong num\n", num);
        }
    }
    return 0;
}