#include <stdio.h>
int gcd(int x, int y){
    int rem;
    if(x>y){
        int temp = y;
        y=x;
        x=temp;
    }
    while(1){
        rem = y % x;
        if(rem==0){
            break;
        }
        y = x;
        x = rem;
    }
    return x;
}
int lcm(int x, int y){
    int result = (x * y) / (gcd(x, y));
    return result;
}
int main(){
    int a=121, b=55;
    int gcd_val = gcd(a, b);
    int lcm_val = lcm(a, b);
    printf("GCD is %d\n", gcd_val);
    printf("LCM is %d\n", lcm_val);
    return 0;
}