#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Asad_Ahsan";
    char str1[] = " Asad_Ahsan";
    char target[30];
    // printf("%d\n", strlen(str));

    strcpy(target, str);
    // printf("%s %s\n", target, str);

    char concat_str[40] = "what is";
    printf("%d\n", strlen(concat_str));
    strcat(concat_str, str1);
    printf("%s\n", concat_str);
    printf("%d\n", strlen(concat_str));

    return 0;
}