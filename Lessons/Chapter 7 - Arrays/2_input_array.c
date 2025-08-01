#include <stdio.h>

int main(){
    int marks[5];

    for (int i=0; i<5; i++){
        printf("\nenter marks in sub %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int j=0; j<5; j++){
        printf("marks are %d\n", marks[j]);
    }
    return 0;
}