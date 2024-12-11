#include <stdio.h>

int main(){
    int cgpa[3] = {6, 7, 8};
    int years[] = {1, 2, 4};


    printf("the cgpa is %u\n", &cgpa[2]);
    printf("the cgpa is %u\n", &years[7]);
    return 0;
}