#include <stdio.h>

int main(){
    int marks[5];
    for (int i=0; i<5; i++){
        printf("\nenter marks %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int i=0; i<5; i++){
    printf("the address is %u\n", &marks[i]);
    }
    return 0;
}