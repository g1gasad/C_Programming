#include <stdio.h>

// int main(){
//     int r = 2;
//     printf("The area of circle with radius %d cm is %.2f sq. cm", r, 3.14*r*r);
//     return 0;
// }

int main(){
    int r, h;
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &h);
    printf("The volume of the cylinder with radius %d cm \
and height %d cm is %.3f cub.cm", r, h, 3.14*r*r*h);
    return 0;
}