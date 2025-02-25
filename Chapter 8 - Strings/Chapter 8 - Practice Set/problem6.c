#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "asad ahsan";
    char encrypted[20];
    for (int i=0; i<strlen(str); i++){
        encrypted[i] = str[i]+1;
    }

    // printf("%c %d", ch, ch)
    printf("%s - %s", str, encrypted);
    return 0;
}