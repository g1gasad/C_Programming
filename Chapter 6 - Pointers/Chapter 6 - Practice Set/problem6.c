#include <stdio.h>

int main(){
    int i = 5;
    int* j = &i;
    int** k = &j;
    int*** l = &k;

    printf("the val is %d\n", ***l);
    return 0;
}