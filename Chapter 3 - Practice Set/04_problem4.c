#include <stdio.h>

int main(){
    int year;
    printf("enter the year you want to check: ");
    scanf("%d", &year);

    if(year%100==0 && year%400!=0){
        printf("not a leap year");
    }
    else if(year%4==0){
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }

    return 0;
}   