#include <stdio.h>
/*
Create a matrix of m x n dimension that contains multiplication table of
input given by the user. Implement using functions and arrays
*/
void displayTable(int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        printf("[");
        for (int j = 0; j < col; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("]\n");
    }
}

void createTable(int row, int col, int arr[row][col], int nums[])
{
    for (int i = 0; i < row; i++)
    {
        int n = nums[i];
        for (int j = 0; j < col; j++)
        {
            int val = n * (j + 1);
            arr[i][j] = val;
        }
    }
}

int main()
{
    int rows, cols;
    printf("Enter the dimensions for your table: \n");
    printf("rows: ");
    scanf("%d", &rows);
    printf("cols: ");
    scanf("%d", &cols);

    int numsArray[rows];
    printf("enter your desired nums: \n");
    for (int i = 0; i < rows; i++)
    {
        scanf("%d", &numsArray[i]);
    }

    int multiplicationTable[rows][cols];
    displayTable(rows, cols, multiplicationTable);
    createTable(rows, cols, multiplicationTable, numsArray);
    displayTable(rows, cols, multiplicationTable);

    return 0;
}