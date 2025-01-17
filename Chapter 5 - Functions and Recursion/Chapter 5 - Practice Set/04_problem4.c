#include<stdio.h>

// Fib seq - 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ..., n
int fibonacci(int);
int fibonacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n=7;

    printf("%d", fibonacci(n));

    return 0;
}