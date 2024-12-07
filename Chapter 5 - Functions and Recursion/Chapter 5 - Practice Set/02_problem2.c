#include <stdio.h>

float degree_conv(int);

float degree_conv(int c){
    return c*9/5.0 + 32;
}

int main(){
    int c;
    printf("enter deg in celcius: ");
    scanf("%d", &c);
    printf("fah is %.2f", degree_conv(c));
    return 0;
}