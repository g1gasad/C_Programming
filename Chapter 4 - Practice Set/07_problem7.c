// 7. Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
#include <stdio.h>

int main(){
    int n=8;
    int i=1;
    int sum=0;
    int p;
    while (i<11){
        p=n*i;
        sum += p;
        i++;
    }
    printf("the of nums: %d", sum);

    return 0;
}