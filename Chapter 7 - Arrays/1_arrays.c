#include <stdio.h>

int main(){
    int marks[5];
    marks[0] = 40;
    marks[1] = 35;
    marks[2] = 43;
    marks[3] = 41;
    marks[4] = 37;
    
    for (int i=0; i<5; i++){
        printf("the marks are %d\n", marks[i]);
        printf("the adds are %u\n\n", &marks[i]);
    }

    return 0;
}