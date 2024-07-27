#include <stdio.h>

int main(){
    
    if(1){
        printf("if this is true, it'll be executed\n");
    };

    if(2632){
        printf("or this?\n");
    };

    if(0){
        printf("This is zero\n");
    }
    else{
        printf("here I am zero\n");
    };

    if('a'){
        printf("this is a character\n");
    };
    return 0;
}