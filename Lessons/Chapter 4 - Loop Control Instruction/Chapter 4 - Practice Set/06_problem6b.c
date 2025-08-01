// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include <stdio.h>

int main(){
    int i=1;
    int sum=0;

    do{
        sum += i;
        i++;
    } while(i<11);

    printf("sum of first 10 natural numbers is %d", sum);
    
    return 0;
}