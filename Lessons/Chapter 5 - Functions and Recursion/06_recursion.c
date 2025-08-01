#include <stdio.h>

int factorial(int);

int factorial(int n){
    if (n==1 || n==0){
        return 1;
    }
    else {
        return factorial(n-1)*n;
    }
}

int main(){
    int a, val;
    printf("enter a number: ");
    scanf("%d", &a);
    val = factorial(a);
    printf("the factorial is : %d", val);

    return 0;
}