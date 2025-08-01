// Write a C program to input elements of a matrix M of size 5 x 5 and
// to display the sum of all non – diagonal elements of matrix M
#include <stdio.h>
int main(){
    int mat[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("enter value for [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i==j){
                continue;
                printf("skipped");
            }
            sum = sum + mat[i][j];
        }
    }
    printf("The sum is %d", sum);
    // printf("%d", sizeof(mat)); yup, size is 36
}