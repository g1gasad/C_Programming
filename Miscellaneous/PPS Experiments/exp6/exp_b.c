// b. Write a C program to multiply two matrices whose elements
// as well as number of rows and columns are entered through keyboard. 
#include <stdio.h>
void displayMat(int row, int col, int arr[row][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row, col;
    printf("Enter the dimensions of desired matrix\n");
    printf("rows: ");
    scanf("%d", &row);
    printf("cols: ");
    scanf("%d", &col);
    int mat_a[row][col], mat_b[row][col], multi[row][col];

    printf("enter values for matrix A:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("value at mat_a[%d][%d]: ", i, j);
            scanf("%d", &mat_a[i][j]);
        }
    }
    displayMat(row, col, mat_a);

    printf("enter values for matrix B:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("value at mat_b[%d][%d]: ", i, j);
            scanf("%d", &mat_b[i][j]);
        }
    }
    displayMat(row, col, mat_b);

    printf("The multiplication of A and B is:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            multi[i][j] = mat_a[i][j] * mat_b[i][j];
        }
    }
    displayMat(row, col, multi);
    
    return 0;
}