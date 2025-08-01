#include <stdio.h>

int main(){
    int sizeint = sizeof(int);
    int sizefloat = sizeof(float);
    int sizechar = sizeof(char);
    int iarr[6];
    char charr[6];
    int sizeiarr = sizeof(iarr);
    int sizecharr = sizeof(charr);
    printf("%d\n", sizeint);
    printf("%d\n", sizefloat);
    printf("%d\n", sizechar);
    printf("%d vs %d\n", sizeiarr, sizecharr);

    return 0;
}