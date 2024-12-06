#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer, pointing to i
    int k = 34;

    printf("the address of i is %u\n", &i);
    printf("the address of i is %u\n", j);
    printf("the address of i is %u\n", &k);
    // u for unsigned int
    return 0;
}