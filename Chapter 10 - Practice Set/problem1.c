#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("myfile.txt", "r");
    if (ptr != NULL)
    {
        int n1, n2, n3;
        fscanf(ptr, "%d %d %d", &n1, &n2, &n3);
        printf("the ints are : %d %d %d", &n1, &n2, &n3);

        fclose(ptr);
    }
    else
    {
        printf("file does not exist");
    }

    return 0;
}