#include <stdio.h>

char slice(char str[], int m, int n){
    char *ptr1 = str[m];
    char *ptr2 = str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}

int main(){
    char str[] = "what_is_this";
    int m=2, n=7, chars=n-m+1;

    char spl_str[chars];
    for (int i=0; i<chars; i++){
        spl_str[i] = str[m+i];
    }
    printf("%s", spl_str);
    return 0;
}