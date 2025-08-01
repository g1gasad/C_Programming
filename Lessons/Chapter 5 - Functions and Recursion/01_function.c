#include <stdio.h>

// Function prototype
int sum(int, int);

// Function Definition
int sum(int x, int y){
    // printf("the sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a=2; int b=4;
    int c = sum(a, b);
    
    printf("the sum is %d\n", c);

    return 0;
}