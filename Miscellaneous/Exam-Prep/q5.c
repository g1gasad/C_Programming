
#include <stdio.h>
int main()
{
    int i = 3, j;
    j = i++;
    printf("%d %d\n", i, j);
    printf("%d %d", i++, ++j);
    return (0);
}