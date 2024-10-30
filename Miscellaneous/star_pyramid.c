#include <stdio.h>

int main(){
    int n;
    printf("enter the height of desired pyramid: ");
    scanf("%d", &n);
    int m=n;
    for (int i=1; i<=n; i++){
        for (int k=n-i; k>0; k--){
            printf("%c", ' ');
        }
        for (int j=1; j<=2*i-1; j++){
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
}