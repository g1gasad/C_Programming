#include <stdio.h>

int main(){
    int i, n;
    printf("enter a range: ");
    scanf("%d", &n);

    for (i=0; i<=n; i++){
        printf("%d\n", i);
    }

    return 0;
}