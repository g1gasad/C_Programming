// b. Write a C program to find fibonacci series using recursion
#include <stdio.h>
// Fib seq - 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ..., n
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 5;
    
    printf("Sum for %d terms is %d", n, fibonacci(n));
    return 0;
}