#include <stdio.h>

int main(){
    int i=5;
    printf("Value of i is %d\n", i);

    i = i + 5;
    printf("Value of i i %d\n", i);
    /*
    i++ prints first and then increments the value (Post Increment Operator)
    ++i increments the value and then prints (Pre Increment Operator)
    */
    printf("Value if i is %d\n", i++);
    printf("Value if i is %d\n", ++i);
    printf("Value if i is %d\n", i++);

    printf("Value of i is %d\n", --i);
    return 0;
}