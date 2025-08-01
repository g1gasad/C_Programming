#include <stdio.h>

int main(){
    int i = 69;
    int* j = &i;
    int** k = &j;
// * and & cancel out each other
    printf("the 1 is: %d\n", *(&i));
    printf("the 1 is: %u\n", &i);
// * says, what is the value at j, since is the address of i
    printf("the 2 is: %u\n", *j);

    printf("the 3 is: %u\n", *(&j));

    printf("the 4 is: %u\n", **(&j));

    printf("the 5 is: %u\n", ***(&k));

    return 0;
}