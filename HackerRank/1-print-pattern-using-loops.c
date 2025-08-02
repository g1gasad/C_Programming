#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for (int i=0; i<n*2-1; i++){
        for (int j=0; j<n*2-1; j++){
            if((i==n-1)&&(j==n-1)){
                printf("%d ", n-1);
            }
            else{
                printf("%d ", n);
            }
        }
        printf("\n");
    }
    return 0;
}