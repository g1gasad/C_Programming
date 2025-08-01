// write a C Program to find roots 
// of a Quadratic Equation using switchcase. 
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    a=1; b=-2; c=3;
    float r1, r2;
    // printf("Enter value of coeff a: ");
    // scanf("%d", &a);
    // printf("Enter value of coeff b: ");
    // scanf("%d", &b);
    // printf("Enter value of coeff c: ");
    // scanf("%d", &c);
    int var;
    float deter = pow(pow(b,2) - 4*a*c, 0.5);
    if(deter==0){
        var=0;
    }
    else if (deter>0){
        var=1;
    }
    else{
        var=-1;
    }
    switch(var){
        case 1: 
            r1 = (-1*b + deter)/2.0*c;
            r2 = (-1*b - deter)/2.0*c;
            printf("The roots are different %.1f | %.1f\n", r1, r2);
            break;
        case 0:
            r1 = (-1*b - deter)/2.0*c;
            printf("The roots are equal %.1f | %.1f\n", r1, r1);
            break;
        case -1:
            printf("Imaginary roots\n");
    }

    return 0;
}