#include <stdio.h>

int main(){
    int marks[] = {4, 6, 2, 7, 8};
    // printf("the mark is %d", &marks[7]);

    // int* ptr = &marks[0];
    int* ptr = marks; // same as above

    for (int i=0; i<5; i++){
        printf("the value at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}