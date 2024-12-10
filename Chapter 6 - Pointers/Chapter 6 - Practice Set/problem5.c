#include <stdio.h>
#include <math.h>
int* sum(int*, int*);
int* sum(int* a, int* b){
    int s = *a + *b;
    int* ptrs = &s;
    printf("the sum is %d\n", s);
    return ptrs;
}

float* average(int*, int*);
float* average(int* a, int* b){
    float av = (*a + *b)/2.0;
    float* ptra = &av;
    printf("the average is %f\n", av);
    return ptra;
}

int main(){
    int x=5; int y=6;
    int* ptrx = &x;
    int* ptry = &y;
    int* ptr1;
    float* ptr2;
    ptr1 = sum(ptrx, ptry);
    ptr2 = average(ptrx, ptry);
    printf("the add of sum var is %u\n", ptr1);
    printf("the add of average var is %u\n", ptr2);
    return 0;
}