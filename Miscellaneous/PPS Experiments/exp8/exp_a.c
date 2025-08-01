#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("E:/Projects/Learning/C_Programming/PPS Experiments/exp8/myfile.txt", "r");
    if (ptr != NULL)
    {
        char ch;
        int totalChar = 0;
        int numSpace = 0;
        int numNewline = 0;
        int numTabs = 0;
        while (1)
        {
            ch = fgetc(ptr);
            if (ch == ' ')
            {
                numSpace++;
            }
            else if (ch == '\n')
            {
                numNewline++;
            }
            else if (ch == '\t')
            {
                numTabs++;
            }
            if (ch == EOF)
            {
                break;
            }
            totalChar++;
        }
        int numChar = totalChar - (numNewline + numSpace + numTabs);
        printf("\nNum chars: %d\n", numChar);
        printf("Num newline: %d\n", numNewline);
        printf("Num spaces: %d\n", numSpace);
        printf("Num tabs: %d\n", numTabs);

        fclose(ptr);
    }
    else
    {
        printf("no file found");
    }

    return 0;
}