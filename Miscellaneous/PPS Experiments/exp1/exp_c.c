#include <stdio.h>
// F = (C * 1.8) + 32
int main(){
    float fahrenheit;
    float celsius = -21;
    fahrenheit = (celsius * 1.8) + 32;

    printf("Temperature of %.2f Celsius in Fahrenheit is %.2f deg", celsius, fahrenheit);
    return 0;
}