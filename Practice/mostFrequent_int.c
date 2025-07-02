#include <stdio.h>
void displayMax(int arr[]){
    int max=arr[0]; 
    int value = 0;
    for(int i=0; i<100; i++){
        if(arr[i]>max){
            max=arr[i];
            value=i;
        }
    }
    printf("Mode of the data is %d\nMax frequency is %d\n", value, max);
}
int main(){
    int arr[] = {3, 6, 1, 1, 1, 5, 7, 90, 69, 0, 3, 6, 1, 1, 5};
    int freq[100] = {0};
    for(int i=0; i<sizeof(arr)/4; i++){
        freq[arr[i]]++;
    }
    displayMax(freq);
    return 0;
}