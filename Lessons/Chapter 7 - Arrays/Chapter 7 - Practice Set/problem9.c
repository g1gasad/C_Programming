#include <stdio.h>

void displayAddress(int x, int y, int z, int arr[x][y][z])
{
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            for (int k=0; k<z; k++){
                printf("the add of is: %u\n", &arr[i][j][k]);
            }
        }
    }
}
int main(){
    int matrix[2][3][4];
    displayAddress(2, 3, 4, matrix);
    printf("GG");
    return 0;
}