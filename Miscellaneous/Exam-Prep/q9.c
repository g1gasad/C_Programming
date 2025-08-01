// Write user defined function Armstrong() to check whether number is Armstrong
// or not. Function should take three digit integer number as argument and
// return 1 if number is Armstrong and 0 if number is not Armstrong number.
// Write main() to call function Armstrong() and to display appropriate message
// showing number is Armstrong or not.
// [Example : 153 is Armstrong number 1^3 + 5^3 + 3^3 = 153
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arms(int a, int b, int c, int num);
int arms(int a, int b, int c, int num){
    int sum = pow(a, 3) + pow(b, 3) + pow(c, 3);
    if (sum==num){
        return 1;
    }
    else 
        return 0;
}

int main(){
    int a=1, b=5, c=3, num;
    char stra[20], strb[20], strc[20], strnum[50]="";
    sprintf(stra, "%d", a);
    sprintf(strb, "%d", b);
    sprintf(strc, "%d", c);
    strcat(strnum, stra);
    strcat(strnum, strb);
    strcat(strnum, strc);
    printf("%s\n", strnum);
    num = atoi(strnum);
    int result = arms(a, b, c, num);
    if (result){
        printf("it is an arm num");
    }
    else{
        printf("nah");
    }
    return 0;
}