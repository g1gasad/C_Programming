#include <stdio.h>

int main(){

    int i=1;
    int n;

    printf("enter a range: ");
    scanf("%d", &n);

    do
    {
        printf("number: %d\n", i);
        i++;
    } 
    while (i<n);
    return 0;
}