#include <stdio.h>

// void: because we arent going to return anything
void multi10(int*);
void multi10(int* address){
    *address = (*address * 10);
}
int main(){
    int i=2;
    printf("the val is %d\n", i);
    multi10(&i);
    printf("the val is %d\n", i);
    return 0;
}