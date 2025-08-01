#include <stdio.h>

float force(float);
float force(float mass){
    return mass*9.8;
}

int main(){
    int m=53;
    printf("the force exerted is %.2f Newtons\n", force(m));
    return 0;
}