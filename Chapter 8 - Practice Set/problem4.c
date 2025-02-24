#include <stdio.h>

char* slice(char str[], int m, int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(){
    char str[] = "what_is_this";
    int m=2, n=7;
    printf("%s", slice(str, 1, 5));
    return 0;
}