#include <stdio.h>

int sum(int, int);
int sum(int a, int b){
    return a + b;
}

int main(){
    int x=6; int y=7;
    printf("the sum of x and y is: %d\n", sum(x, y));
    return 0;
}