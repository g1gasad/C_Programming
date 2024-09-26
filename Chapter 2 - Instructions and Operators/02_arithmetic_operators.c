#include <stdio.h>
// There is no operator for exponent in C however we can
// use "pow" (x, y) from C lib.

int main(){
    float a = -5.0;
    float b = 3.0;
    // int c = a + b;
    // int d = a * b;
    // int d; d = a * b; // legal
    // int e = a % b;
    float f = a / b;
    // printf("the value of a is %d, the value of b is %d and sum is %d.\n", a, b, c);
    // printf("remainder when a is divided by b is: %d", a%b);
    // printf("multiplication operator: %d\n", d);
    // printf("remainder: %d\n", e);
    printf("division of %f and %f is %f", a, b, f);
    return 0;
}