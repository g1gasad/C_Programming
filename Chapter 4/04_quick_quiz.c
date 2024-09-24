#include <stdio.h>

int main(){
    /*
    Write a program to print natural numbers from 10 to 20 
    when initial loop counter in initialized to 0
    */
    int i=0;
    while (i<11){
        printf("number: %d \n", i+10);
        i++;
    }
    return 0;
}