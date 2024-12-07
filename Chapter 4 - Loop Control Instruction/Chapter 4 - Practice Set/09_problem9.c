// 8. Write a program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main(){
    int n=10;
    int factorial=1;
    while(n){
        factorial*=n;
        n--;
    }
    printf("the fact of 10 is %d", factorial);
    return 0;
}