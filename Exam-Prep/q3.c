/*Write a C Program to print given pattern.
 1
 24
 135
 2468
 13579
*/
#include <stdio.h>
int main(){
    for (int i=1; i<6; i++){
        int n=1, m=2;
        for (int j=0; j<i; j++){
            if(i%2==1){
                printf("%d", n);
            }
            else{
                printf("%d", m);
            }
            n=n+2;
            m=m+2;
        }
        printf("\n");
    }

    return 0;
}