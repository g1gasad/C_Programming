#include <stdio.h>

int main(){
    // Type Declaration Instruction
    int i = 10;
    int j = i;
    float k = j;
    int a = 2, b=5, u=9;
    int p, q, t, r;
    p = q = t = r = 69;
    int ps = p + q - r;
    int pm = p * q * r;
    // one variable cannot be declared again and again
    float pd = p / b;
    // %d is called format specifier
    printf("Values are - i:%d & j:%d & k:%f", i , j, k);
    printf("\nValues of a, b and u are %d, %d and %d", a, b, u);
    printf("\nValues of p, q, t, r are %d %d %d %d", p, q, t, r);
    printf("\nThe summation is %d", ps);
    printf("\nThe multiplication is %d", pm);
    printf("\nThe division is %f", pd);
    return 0;
}