#include <stdio.h>

int main(){
    // int matrix[3][2] = {{4, 5}, {6, 0}, {1, 7}};
    // printf("the val is %d\n", matrix[2][1]);
    int matrix[2][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            // printf("enter num %d: ", 3*i+j+1);
            printf("enter the val of arr[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            printf("\n");
        }
    }

    int* ptr = &matrix[0][0];
    printf("the add is %u\n", ptr);

    for (int i=0; i<6; i++){
        printf("the val at %dth index address is %d\n", i, ptr+i);
    }
    return 0;
}   