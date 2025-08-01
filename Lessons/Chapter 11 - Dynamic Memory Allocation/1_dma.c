#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    int* ptr;
    printf("enter size of array: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 4;
    ptr[1] = -1;
    ptr[2] = 9;
    ptr[3] = 69;

    for (int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }
    // int size = sizeof(n);
    // printf("Mem for %d is %d bytes", n, size);
    return 0;
}