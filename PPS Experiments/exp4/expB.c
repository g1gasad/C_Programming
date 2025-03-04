#include <stdio.h>
int factorial(int a){
    if (a==1){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}

void OddEven(int a){
    if(a%2==0){
        printf("%d is Even", a);
    }
    else{
        printf("%d is Odd", a);
    }
}

int PrimeNumber(int a){
    for (int i=2; i<a; i++){
        if (a%i==0){
            // printf("%d is Not Prime", a);
            return 0;
        }
    }
    // printf("%d is Prime", a);
    return 1;
}

int main(){
    int number;
    char choice;

    printf("Menu:\n");
    printf("A - Factorial\n");
    printf("B - Odd or Even\n");
    printf("C - Prime or Not\n");
    printf("D - Exit\n");

    printf("Enter a number: ");
    scanf("%d", &number);
    // while (getchar() != '\n');
    fflush(stdin);
    printf("Enter your choice: ");
    scanf("%c", &choice);

    switch(choice){
        case 'A':{
            printf("The Factorial result for %d is %d", number, factorial(number));
            break;
        }
        case 'B':{
            OddEven(number);
            break;
        }
        case 'C':{

            if (PrimeNumber(number)){
                printf("%d is Prime", number);
            }
            else {
                printf("%d is not Prime", number);
            };
            break;
        }
        case 'D':{
            break;
        }
        default:{
            printf("Enter a valid choice");
        }
    }
    return 0;
}