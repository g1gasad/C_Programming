#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char binary[] = "1111111111"; // 13
    int numChar = strlen(binary);
    int decimal=0;
    char digit;
    for(int i=0; i<numChar; i++){
        digit = binary[numChar-i-1];
        if(digit=='1'){
            decimal = decimal + 1*pow(2, i);
        }
    }
    printf("Decimal conv of %s is %d", binary, decimal);
    return 0;
}