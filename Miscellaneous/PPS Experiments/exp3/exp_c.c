#include <stdio.h>

int main(){
    int n;
    printf("How many numbers do you have: ");
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
        fflush(stdin);
    }
    int sum=0;
    for (int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("Sum of your %d numbers is %d", n, sum);

    return 0;
}