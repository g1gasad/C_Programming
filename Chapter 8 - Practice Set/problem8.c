#include <stdio.h>
#include <string.h>

int charCount(char str[], char ch){
    int count=0;
    for (int i=0; i<strlen(str); i++){
        if (ch==str[i]){
            count++;
        }
    }
    return count;

}
int main(){
    char str[] = "Asad Ahsan";
    char ch = 'A';
    printf("%d", charCount(str, ch));

    return 0;
}