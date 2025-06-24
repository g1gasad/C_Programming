#include <stdio.h>
int factorial(int x){
    if(x<=1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int num=99;
    int sum=0;
    int temp = num;
    while(temp){
        // Gives the num at the unit digit
        int val = temp % 10;
        // Adding fact value to the sum
        sum = sum + factorial(val);
        // Removing the current unit digit
        temp = temp/10;
    }

    if (sum==num) printf("its a strong num");
    else printf("weak num");

    return 0;
}