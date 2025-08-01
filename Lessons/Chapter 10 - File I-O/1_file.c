#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("asad.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the num from text is %d\n", num);
    
    fscanf(ptr, "%d", &num);
    printf("the num from text is %d\n", num);
    
    fscanf(ptr, "%d", &num);
    printf("the num from text is %d\n", num);
    fclose(ptr);
    return 0;
}