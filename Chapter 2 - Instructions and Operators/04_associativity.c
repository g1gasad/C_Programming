#include<stdio.h>

int main(){
    int a = 3;
    int b = 6;
    int c = 9;
    // printf("the val here is %d\n", a*b/c + 7);
    // printf("whereas, the val here is %d\n", a*(b/c) + 7);
    printf("The values is %d", 3*b/2*c + 5*a);
    // It'll go like this-
    // 1. 3*6/2*9 + 5*3
    // 2. 18/2*9 + 15
    // 3. 9*9 + 15
    // 4. 81 + 15
    // 5. 96
    return 0;
}