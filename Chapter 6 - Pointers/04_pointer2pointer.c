#include <stdio.h>

int main(){
    int i = 69;
    int* j = &i;
    int** k = &j;

    printf("the val is: %d\n", *(&i));
    printf("the add is: %u\n", &i);
    printf("the add is: %u\n", k);
    printf("the add is: %u\n", &k);
    return 0;
}