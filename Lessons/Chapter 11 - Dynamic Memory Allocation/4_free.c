#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, val = 69;
    int* ptr;
    printf("enter size of array: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));

    for (int i=0; i<4; i++){
        ptr[i] = val;
        val = val + 33;
    }
    for (int j=0; j<n; j++){
        printf("%d\n", ptr[j]);
    }
    // Deallocate the memory
    free(ptr);
    return 0;
}