#include<stdio.h>
int main(){
    int x, y, z, k;
    x = 2; y = 3; z = 3; k = 1;
    float e = 3*x/y - z + k;
    printf("answer: %f", e);
    return 0;
}

// Step by Step evaluation:
// 1. --> 3*2 / y - 3 + 1
// 2. --> 6 / 3 - 2
// 3. --> 2 - 2
// 4. --> 0