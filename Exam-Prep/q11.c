// (b) Write a C program to count total number of words in a string.
#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Number of words is 5, but what about now?";
    char ch;
    int count=0;
    for (int i=0; i<=strlen(str); i++){
        ch = str[i];
        if (ch==' ' || ch=='\0'){
            count++;
        }
    }
    printf("the count is %d", count);
    return 0;
}