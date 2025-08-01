#include <stdio.h>

int main(){
    char a = 'A';
    char* b = &a;
    float c = 3.14;
    float* d = &c;
    
    printf("add a = %u\n", &a);
    printf("add a = %u\n", b);

    printf("val a = %c\n", a);
    printf("val a = %c\n", *b);

    return 0;
}