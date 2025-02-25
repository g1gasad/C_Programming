#include <stdio.h>
#include <string.h>

int charCheck(char str[], char ch){
    int i=0;
    int result;
    while (i<strlen(str)){
        if (ch == str[i]){
            result = 1;
            break;
        }
        result=0;
        i++;
    }
    return result;
}

int main(){
    char str[] = "Asad Ahsan";
    char ch = 'k';
    int present = charCheck(str, ch);
    if (present){
        printf("Yes, %c in arr", ch);
    }
    else{
        printf("No, %c not in arr", ch);
    }

    return 0;
}