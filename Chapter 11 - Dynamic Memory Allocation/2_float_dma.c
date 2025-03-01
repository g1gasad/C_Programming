#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n = 5;
    float *ptr;
    // printf("enter arr length: ");
    // scanf("%d", &n);

    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 3.14;
    ptr[1] = 2.718;
    ptr[2] = 69.69;

    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);

    return 0;
}