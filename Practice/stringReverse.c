#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "what is this\0";
    int slen = strlen(str);
    char *ptr = &str[slen-1];

    for(int i=0; i<slen; i++){
        printf("%c", *ptr);
        ptr--;
    }
    return 0;
}