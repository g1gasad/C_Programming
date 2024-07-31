#include <stdio.h>

int main(){
    int num1, num2, num3, num4, max=0;
    printf("Enter num 1: ");
    scanf("%d", &num1);   
    printf("Enter num 2: ");
    scanf("%d", &num2);
    printf("Enter num 3: ");
    scanf("%d", &num3);
    printf("Enter num 4: ");
    scanf("%d", &num4);

    if(num1>num2 && num1>num3 && num1>num4){
        printf("%d is the greatest number", num1);
    }
    else if(num2>num1 && num2>num3 && num2>num4){
        printf("%d is the greatest number", num2);
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        printf("%d is the greatest number", num3);
    }
    else if(num4>num1 && num4>num2 && num4>num3){
        printf("%d is the greatest number", num4);
    }
    else{
        printf("its a tie");
    }

    return 0;
}