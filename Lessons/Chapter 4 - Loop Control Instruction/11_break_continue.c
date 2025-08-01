#include <stdio.h>

int main(){
    for (int i=0; i<19; i++){

        if (i%5==0){
            // break; // exit the loop now (terminate the loop) 
            continue; // skip the iteration
        } // continue will tell it move on to the next iteration
          // without executing the rest of the code below
        printf("i is %d\n", i);
    }
    printf("loop has completed\n");
    return 0;
}