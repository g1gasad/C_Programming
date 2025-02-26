#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    fptr1 = fopen("asad.txt", "w");
    if (fptr1 != NULL)
    {
        char space[] = " ";
        for (int i = 0; i < 70; i++)
        {
            if (i % 3 == 0)
            {
                fprintf(fptr1, "%d", i);
                fprintf(fptr1, "%s", space);
            }
        }
        fclose(fptr1);
    }

    fptr2 = fopen("asad2.txt", "a");
    if (fptr2 != NULL)
    {
        char space[] = " ";
        fprintf(fptr2, "%c", '\n');

        for (int i = 0; i < 70; i++)
        {
            if (i % 3 == 0)
            {
                fprintf(fptr2, "%d", i);
                fprintf(fptr2, "%s", space);
            }
        }
        fclose(fptr2);
    }
    return 0;
}