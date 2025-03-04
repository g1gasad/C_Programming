#include <stdio.h>

char grade(float per){
    if (per>=90){
        return 'A';
    }
    else if (per>=80){
        return 'B';
    }
    else if (per>=70){
        return 'C';
    }
    else if (per >= 60){
        return 'D';
    }
    else if (per>=40){
        return 'E';
    }
    else {
        return 'F';
    }

}
int main(){
    float percentage = 15.6;
    printf("Your Grade is: %c", grade(percentage));
    return 0;
}