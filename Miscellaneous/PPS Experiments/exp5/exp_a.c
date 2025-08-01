// a. Write a C program to perform swapping using function.
#include <stdio.h>

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 5;
    int b = 7;
    printf("Given- a: %d || b: %d\n", a, b);
    swap(a, b);
    printf("After swap- a: %d || b: %d", a, b);
    return 0;
}