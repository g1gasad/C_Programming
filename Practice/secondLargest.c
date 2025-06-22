#include <stdio.h>

int main(){
    int arr[] = {-3, -6, -1, -8, -1, -22, -66, -33, -12};
    int max=arr[0];
    int smax;
    for(int i=1; i<sizeof(arr)/4; i++){
        if (arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if((arr[i]<max) && (arr[i]>smax)){
            smax=arr[i];
        }
    }

    printf("Max: %d\n", max);
    printf("Second Max: %d\n", smax);
    return 0;
}