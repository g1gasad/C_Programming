#include<stdio.h>
/* 
Logical operators only return 1 and 0 i.e. Boolean
Hence, we use %d as format specifier for the above result
*/
int main(){
    int a = 6, b = 0; // This is valid
    float c = 0.0;

    printf("The value of a and b is: %d\n", a&&b);
    printf("The value of a or b is: %d\n", a||b);

    if(c){
        printf("this is true\n");
    } else{
        printf("this is false\n");
    }

    printf("the value of a or c is: %d\n", a||c);
    printf("the value of a and c is: %d\n", a&&c);
    printf("the value of not(a) is %d\n", !a);

    return 0;
}

// Any non-zero 