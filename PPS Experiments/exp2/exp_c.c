#include <stdio.h>

int vowel(char ch)
{
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        if (ch == vowels[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char ch = 'z';
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Alphabet and a ");
        if (vowel(ch))
        {
            printf("vowel.");
        }
        else
        {
            printf("consonant.");
        }
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}