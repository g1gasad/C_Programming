#include <stdio.h>

int main(){
    int radius = 4;
    float area, circumference;
    area = 3.1415 * radius * radius;
    circumference = 2 * 3.1415 * radius;

    printf("The area of the circle is %.2f\n", area);
    printf("The circumference of the circle is %.2f\n", circumference);
    
    return 0;
}