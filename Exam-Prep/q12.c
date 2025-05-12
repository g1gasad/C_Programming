//  Write a C program to read elements in a matrix and interchange elements
// of primary (major) diagonal with secondary (minor) diagonal.
#include <stdio.h>
void display_mat(int arr[][3], int r, int c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            printf("[%d][%d]: %d ", i, j, arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat[3][3] = {{1, 3, 5}, {4, 0, 1}, {8, 1, 5}};
    int new[3][3];
    display_mat(mat, 3, 3);
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i==j){
                new[]
            }
        }
    }
    return 0;
}