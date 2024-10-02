#include <stdio.h>
#include <math.h>
// func prototype
int area(int x);
// function definition
int area(int x){
    return round(pow(x, 2));
}

int main(){
    int side;
    printf("enter side dimension: ");
    scanf("%d", &side);

    int sq_area = area(side);
    printf("the area of square is %d\n", sq_area);

    return 0;
}