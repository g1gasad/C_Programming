#include <stdio.h>
// a. Write a C program to obtain transpose of a 3 x 5 matrix. 

void displayMat(int row, int col, int arr[row][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrix[3][5] = {{3, 1, -2, 0, 7}, 
                        {5, 6, -22, -9, 11},
                        {0, 1, 5, -7, 9}};
    printf("Matrix:\n");
    displayMat(3, 5, matrix);
    int transpose[5][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transposed Matrix:\n");
    displayMat(5, 3, transpose);
    return 0;
}   