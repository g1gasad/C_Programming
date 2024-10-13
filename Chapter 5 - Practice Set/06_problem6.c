#include <stdio.h>

int natSum(int);
int natSum(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    return n + natSum(n-1);
}

int main(){
    int n=100;
    printf("the sum of first %d natural numbers is %d", n, natSum(n));
    return 0;
}