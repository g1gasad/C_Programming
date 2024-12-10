#include <stdio.h>

int returning_2(int*);
int returning_2(int* ptr){
    printf("the value of ptr is %d\n", ptr);
    printf("the value of ptr is %d\n", *ptr);
    return 2;
};

int main(){
    int i=5;
    int* ptr = &i;
    printf("the add is %u\n", ptr);
    printf("the val is %d\n", *ptr);

    returning_2(ptr);
    return 0;
}