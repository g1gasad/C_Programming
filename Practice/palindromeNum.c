#include <stdio.h>
int main(){
    int num = 12321;
    int temp = num;
    int rev=0;
    while(temp){
        rev = (rev*10) + (temp%10);
        temp = temp/10;
        // printf("val : %d\n", val);
        // printf("rev num: %d\n", rev);
        // printf("\n");
    }
    if(num==rev){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    // printf("%d\n", num);
    // printf("%d\n", numCheck);
    return 0;
}