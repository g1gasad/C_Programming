#include <stdio.h>

int main(){
    // char str[] = {'w', 'h', 'a', 't', ' ', 't', 'h', 'e', ' ', 'h', 'e', 'c', 'k', '\0'};
    // these two are same
    char str[] = "what the heck";
    // with double quotes, null char is pre-placed in the end
    for (int i=0; i<=13; i++){
        // printf("the character is %c\n", str[i]);
        // with this, you'll see the null char at the end
        printf("%c", str[i]);
    }

    return 0;
}