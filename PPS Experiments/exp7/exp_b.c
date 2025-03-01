#include <stdio.h>

void swap(int* ptrx, int* ptry){
    int t;
    t = *ptrx;
    *ptrx = *ptry;
    *ptry = t; 
}
int main()
{
    int a = 5, b = 9;
    printf("a: %d | b: %d\n", a, b);
    swap(&a, &b);
    printf("a: %d | b: %d", a, b);
    return 0;
}