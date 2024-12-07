#include <stdio.h>

void swap(int *a, int *b);
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=5; int y=21;
    printf("x: %d | y: %d\n", x, y);

    swap(&x, &y);
    printf("x: %d | y: %d\n", x, y);
    return 0;
}