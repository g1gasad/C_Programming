#include <stdio.h>

int main(){
    char str1[10];
    
    for (int i=0; i<9; i++){
        scanf("%c", &str1[i]);
        fflush(stdin);
    }
    str1[9] = '\0';
    // scanf("%s", astr1);
    printf("%s", str1);
    return 0;
}