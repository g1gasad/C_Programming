#include <stdio.h>
/*Create a matrix that contains multiplication table of
2, 7, 9. Implement using functions and arrays*/
void displayTable(int row, int col, int arr[row][col]){
    for (int i=0; i<row; i++){
        printf("[");
        for (int j=0; j<col; j++){
            printf(" %d ", arr[i][j]);
        }
        printf("]\n");
    }
}

void createTable(int row, int col, int arr[row][col], int nums[]){
    for (int i=0; i<row; i++){
        int n = nums[i];
        for (int j=0; j<col; j++){
            int val = n * (j+1);
            arr[i][j] = val;
        }
    }
}

int main(){
    int multiTable[3][10];
    int nums[] = {2, 7, 9};
    displayTable(3, 10, multiTable);
    createTable(3, 10, multiTable, nums);
    displayTable(3, 10, multiTable);

    return 0;
}