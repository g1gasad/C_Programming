#include <stdio.h>
int sumNatural(int n){
    int sum=0;
    if (n==1){
        return 1;
    }
    else{
        return n + sumNatural(n-1);
    }
}
int main(){
    int n = 10000;
    printf("the sum of first %d natural numbers is %d", n, sumNatural(n));
    return 0;
}