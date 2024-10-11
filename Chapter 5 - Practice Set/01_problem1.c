#include<stdio.h>

float average(int, int, int);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}


int main(){
    int a, b, c;
    float val;
    printf("enter number 1: ");
    scanf("%d", &a);
    printf("enter number 2: ");
    scanf("%d", &b);   
    printf("enter number 3: ");
    scanf("%d", &c);
    val = average(a, b, c);
    printf("the average is %f", val);
    return 0;
}