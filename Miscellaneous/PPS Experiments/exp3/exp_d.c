#include <stdio.h>

int main(){
    char ch = '*';
    int n = 5;
    for(int i=0; i<n; i++){
        printf("%c", ch);
        for (int j=0; j<i; j++){
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}