#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter marks for Chem: ");
    scanf("%d", &a);
    printf("Enter marks for Phy: ");
    scanf("%d", &b);
    printf("Enter marks for Mat: ");
    scanf("%d", &c);
    
    if(a<33 || b<33 || c<33){
        printf("you failed because of less marks\n");
    }
    else if((a+b+c)/3 < 40){
        printf("you failed because of less overall percentage\n");
    }
    else{
        printf("you pass!");
    }

    return 0;
}