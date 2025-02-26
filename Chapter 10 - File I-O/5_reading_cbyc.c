#include <stdio.h>

int main()
{
    char ch;
    FILE *fptr;
    fptr = fopen("asad.txt", "r");
    if (fptr != NULL)
    {
        while (1)
        {
            ch = fgetc(fptr);
            printf("%c", ch);
            if (ch == EOF)
            {
                break;
            }
        }

        fclose(fptr);
    }

    return 0;
}