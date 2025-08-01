#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=5, m=10;
    int *ptr;
    ptr = (int*) calloc(n, sizeof(int));
    ptr[0] = 7;
    ptr[1] = 0;
    ptr[2] = 3;

    ptr = (int*) realloc(ptr, m * sizeof(int));
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[7]);
    printf("%d\n", ptr[8]);
    return 0;
}