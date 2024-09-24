#include <stdio.h>

int main(){
    int n = 10;
    /*
    Holy fuck, if you simply write i in the condition
    the for loop will run until is 0
    Why?? 
    Because the boolean value of 0 is False - CRAZY!
    */
    
    for (int i=n; i; i--)
        printf("value is %d\n", i);

    return 0;
}