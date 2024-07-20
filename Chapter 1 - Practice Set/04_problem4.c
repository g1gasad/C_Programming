#include <stdio.h>

int main(){
    int p, t;
    float si, r;
    printf("Enter the principal value: "); scanf("%d", &p);
    printf("Enter the number of years: "); scanf("%d", &t); 
    printf("Enter the rate of interest: "); scanf("%f", &r);

    si = p * r * t / 100.0;
    printf("The Simple Interest on the principal of Rs. %d with an \
Interest of %.2f %% for %d Years is Rs. %.2f", p, r, t, si);
    return 0;
}