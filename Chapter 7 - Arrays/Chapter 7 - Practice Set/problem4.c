#include <stdio.h>

int main(){
    int size, number;
    printf("enter the size of array: ");
    scanf("%d", &size);
    printf("\nenter the number for multiplication: ");
    scanf("%d", &number);
    int table[size];

    for (int i=0; i<size; i++){
        int j = i+1;
        table[i] = j * number;
    }

    for (int i=0; i<size; i++){
    printf("\nval %d : %d", i+1, table[i]);
    }

    return 0;
}