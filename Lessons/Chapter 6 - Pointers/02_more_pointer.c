#include <stdio.h>

int main(){
    int a = 69;
    int* b = &a;
    int* c = b;

    printf("the address of a is %p\n", &a);
    printf("the address of b is %p\n", &b);
    printf("the address of c is %p\n", &c);
    return 0;
}