// Write a program to convert Celsius to Fahrenheit
// F = 9/5 * C + 32
#include <stdio.h>

int main(){
    float celsius, fah;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
// Here, 9/5 is returning an integer value
    fah = ((9.0/5.0) * celsius) + 32;
// so, always write as 9.0 or add ".0" after the number
    printf("After conversion, the temperature becomes %.3f Fahrenheit.", fah);
    return 0;
}