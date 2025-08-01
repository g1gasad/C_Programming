#include <stdio.h>
// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
int main(){
    // 97, 122
    char letter, ch='a';
    printf("the value of char %c is %d\n", ch, ch);

    printf("enter a letter of your choice: ");
    scanf("%c", &letter);

    if(letter>=97 && letter<=122){
        printf("lowercase with value %d\n", letter);
    }
    else{
        printf("not lowercase with value %d\n", letter);
    }
    
    return 0;
}