/*
Arithmetic operations between
1. int and int     --> int
2. int and float   --> float
3. float and float --> float
*/
#include<stdio.h>
int main(){
    int d = 6.8;
    int int_division(int a, int b){
        int c = a / b;
        printf("operation on INT and INT is %d\n", c);
        return 0;    
    };
    float float_int_division(float a, int b){
        float c = a / b;
        printf("operation on FLOAT and INT is %.3f\n", c);
        return 0;
    };
    float float_float_division(float a, float b){
        float c = a / b;
        printf("operation on FLOAT and FLOAT is %.3f\n", c);
        return 0;
    };
    int_division(12.4, 4);
    // printf("the value of d is %d", d);
    // float_int_division(-17.0, 3);
    // float_float_division(-17.0, 11.0);
};