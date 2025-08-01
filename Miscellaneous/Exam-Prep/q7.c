#include <stdio.h>

int main(){
    int arr[8];
    for (int i=0; i<8; i++){
        printf("Enter elem %d: ", i+1);
        scanf("%d", &arr[i]);
        fflush('\0');
    }
    // printf("\nHello\0World");

    return 0;
}