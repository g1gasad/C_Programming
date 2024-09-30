#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;

    int guess;
    int count = 0;
    int nice = 0;
    printf("guess a number: ");
    while (!nice){
        scanf("%d", &guess);
        if (guess == randomNumber){
            printf("correct! you guessed it right\n");
            nice = 1;
        }
        else if (guess > randomNumber){
            printf("Lower number please: ");
        }
        else{
            printf("Higher number please: ");
        }
        count++;
    }
    if (count == 1){
        printf("and you guessed on your first try!\n", count);
    }
    else{
        printf("and you took %d tries\n", count);
    }
    return 0;
}