#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=6;
    int *ptr;
    int user;
    ptr = (int*) malloc(n * sizeof(int));
    for (int i=0; i<n; i++){
        printf("Enter value %d: ", i+1);
        scanf("%d", &user);
        fflush(stdin);
        ptr[i] = user;
    }

    for (int j=0; j<n; j++){
        printf("Value %d is: %d\n", j+1, ptr[j]);
    }

    return 0;
}