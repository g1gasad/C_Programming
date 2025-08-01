#include <stdio.h>

int main(){
    char str[50];
    printf("enter your string: ");
    scanf("%s", str);
    // you cannot input multi-word strings with scanf, sowy
    printf("your strings is: %s", str);

    return 0;
}