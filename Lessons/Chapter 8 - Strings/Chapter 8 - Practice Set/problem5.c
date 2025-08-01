#include <stdio.h>

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

void str_cpy(char target[], char source[])
{
    for (int i = 0; i < string_length(source); i++)
    {
        target[i] = source[i];
    }
    target[string_length(source)] = '\0';
}

int main()
{
    char str[] = "asad_the_goat";
    char target[30];

    str_cpy(target, str);
    printf("%s - %s", target, str);

    return 0;
}