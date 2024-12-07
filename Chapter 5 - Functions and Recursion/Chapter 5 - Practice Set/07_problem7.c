#include <stdio.h>

int main(){
    int lines=10;
    for (int i=0; i<lines; ++i){

        for (int j=0; j<2*i+1; ++j){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}