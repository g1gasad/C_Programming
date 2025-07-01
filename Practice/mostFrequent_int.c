#include <stdio.h>
void display(int arr[]){
    for(int i=0; i<50; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {3, 6, 1, 1, 1, 5, 7, 90, 69, 0, 3, 6, 1, 1, 5};
    int uniq[50];
    int freq[50] = {0};
    int val;
    for(int i=0; i<sizeof(arr)/4; i++){
        val = arr[i];
        for (int j=0; j<51; j++){
            if (val==uniq[j]){
                freq[i]++;
                break;
            }
        }
        freq[i]++;
        uniq[i] = val;
    }
    display(uniq);
    return 0;
}