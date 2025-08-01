#include<stdio.h>

// scanf is a method in stdio.h

char main(){
    int a;
    scanf("%d", &a);
// %d: defines the type of data i.e. %f for float | %c for char
// &a: denotes the 'address of' passed value that should be copied
// to the address which is indicated by variable a
    printf("The value of a is %d.", a);
    return 0;
}