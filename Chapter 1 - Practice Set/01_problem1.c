#include <stdio.h>

int main(){
    // int length = 3;
    // int breadth = 5;
    int length, breadth;
    printf("Enter Length: ");
    scanf("%d", &length);

    printf("Enter Breadth: ");
    scanf("%d", &breadth);
    printf("The area of the rectangle is %d.", length*breadth);
    return 0;
}