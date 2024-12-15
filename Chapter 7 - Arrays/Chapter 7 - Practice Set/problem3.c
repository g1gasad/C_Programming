#include <stdio.h>

int main(){
    int table[10];
    int* ptr = table;
    for (int i=0; i<10; i++){
        int j = i+1;
        table[i] = j * 5;
    }

    for (int i=0; i<10; i++){
        printf("val %d: %d\n", i+1, table[i]);
    }

    return 0;
}