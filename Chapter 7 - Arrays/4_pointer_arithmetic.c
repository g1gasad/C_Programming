#include <stdio.h>

int main(){
    // this ptr is of integer type, whenever it is incremented
    // by 1, because an int type takes 4 bytes, it'll increment
    // by 4 and not 1
    // 6422296 --> 6422300 
    int a = 4; int b = 5;
    int* ptra = &a;
    int* ptrb = &b;
    char* ptr;
    // ptr = ptra - ptrb;
    printf("the add of a is %d\n", ptra);
    printf("the add of a is %u\n", ptrb);
    printf("the diff is %u\n", ptr);
    // ptr--;
    // printf("the add of a is %u\n", ptr);

    // char b = 'A';
    // char* ptrc = &b;
    // printf("the add of b is %u\n", ptrc);
    // ptrc++;
    // printf("the add of b is %u\n", ptrc); 

    return 0;
}