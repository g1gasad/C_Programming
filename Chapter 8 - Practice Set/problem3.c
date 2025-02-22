#include <stdio.h>
#include <string.h>

int string_length(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main()
{
    char str[] = "what is this";

    printf("%d", string_length(str));
    // printf("lenght is string is %d", strlen(str));
    return 0;
}