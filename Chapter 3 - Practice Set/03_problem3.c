#include<stdio.h>

int main(){
    int income;
    float tax = 0;
    printf("Enter you annual income in digits: ");
    scanf("%d", &income);

    if(income>250000 && income<=500000){
        tax = 0.05*(income - 250000);
    }
    else if(income>500000 && income<=1000000){
        tax = 0.05*(250000) + 0.2*(income-500000);
    }    
    else if(income>1000000){
        tax = 0.05*(250000) + 0.2*(500000) + 0.3*(income-1000000);
    }
    else{
        tax=0;
    }
    printf("you need to pay %.2f in taxes.", tax);

    return 0;
}