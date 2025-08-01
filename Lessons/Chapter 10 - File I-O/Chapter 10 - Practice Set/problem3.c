#include <stdio.h>

int main()
{
    FILE *readptr, *writeptr;
    readptr = fopen("prob3file.txt", "r");
    writeptr = fopen("prob3twice.txt", "w");
    if (readptr != NULL)
    {
        char ch;
        for (int i = 0; i < 2; i++)
        {
            while (1)
            {
                ch = fgetc(readptr);
                printf("%c", ch);
                if (ch == EOF)
                {
                    break;
                }
                fputc(ch, writeptr);
            }
            if (i == 0)
            {
                rewind(readptr);
                fputc('\n', writeptr);
                fputc('\n', writeptr);
            }
        }
        fclose(readptr);
        fclose(writeptr);
    }
    else
    {
        printf("file does not exist");
    }

    return 0;
}