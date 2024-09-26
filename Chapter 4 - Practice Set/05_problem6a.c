// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include <stdio.h>

int main(){
    int sum=0;

    for (int i=1; i<11; i++){
        sum += i;
    }
    printf("sum of first 10 natural numbers is %d", sum);
    
    return 0;
}