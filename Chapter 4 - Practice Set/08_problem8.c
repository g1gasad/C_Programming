// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main(){
    
    int n;
    int factorial=1;
    printf("enter a natural number: ");
    scanf("%d", &n);
    int m=n;

    for (m; m; m--){
        factorial*=m;
    }
    
    printf("factorial of %d is %d\n", n, factorial);
    return 0;
}