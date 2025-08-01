#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("asad_new.txt", "r");
    if (ptr == NULL)
    {
        printf("bruh, the file does not exist!");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("the num from text is %d\n", num);
    }
    fclose(ptr);
    return 0;
}