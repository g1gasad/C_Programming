#include <stdio.h>
#include <string.h>
/*First we find the smallest element and swap it with the first element.
This way we get the smallest element at its correct position.
Then we find the smallest among remaining elements (or second smallest)
and swap it with the second element.
We keep doing this until we get all elements moved to correct position.
*/
void display(int arr[], int length){
    for (int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int min;
    int arr[10] = {4, 8, 1, -5, 12, 9, 0, -69, 77, -1000};
    for (int i=0; i<9; i++){
        min = arr[i];
        for (int j=i+1; j<10; j++){
            if (arr[j]<min){
                min = arr[j];
                arr[j] = arr[i];
                arr[i] = min;
            }
        }
    }
    display(arr, 10);

    return 0;
}