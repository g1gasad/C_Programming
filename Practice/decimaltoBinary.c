#include <stdio.h>
#include <string.h>
void displayBinary(char str[], int x, int num){
    printf("Binary for %d is ", num);
    for(int j=1; j<=x; j++){
        printf("%c", str[x - j]);
    }
}        
int main(){
    int num = 21;
    int temp = num;
    int i=0;
    char bin[40];
    while(temp){
        printf("%d", temp%2);
        if(temp%2==1){
            bin[i] = '1';
        }
        if(temp%2==0){
            bin[i] = '0';
        }
        temp = temp / 2;
        i++;
    }
    printf("\n");
    displayBinary(bin, i, num);
    return 0;
}