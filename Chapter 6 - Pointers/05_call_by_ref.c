#include <stdio.h>

int sum(int*, int*);

int sum(int *a, int *b){
    *a = 9;
    return (*a + *b);
}

int main(){
    int x=1; int y=9;
    // printf("the val is %d\n", sum(x, y));
    printf("the sum is %d\n", sum(&x, &y));
    printf("the val of x is %d\n", x);
    return 0;
}