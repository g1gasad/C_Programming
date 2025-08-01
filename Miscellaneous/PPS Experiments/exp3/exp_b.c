#include <stdio.h>

int main(){
    int n=6;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum = sum + (i * i);
    }
    printf("The sum of the series is %d", sum);
    return 0;
}