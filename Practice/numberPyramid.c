#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < i + 1; j++)
            {
                printf("%d  ", j + 1);
            }
        }
        else
        {
            for (int j = 0; j < i + 1; j++)
            {
                printf("%d ", j + 1);
            }
        }
        printf("\n");
    }
    return 0;
}