#include <stdio.h>

typedef struct complexNumber
{
    int real;
    char imaginary[5];
} cn;

void display(cn x)
{
    printf("%d %s\n", x.real, x.imaginary);
}

int main()
{
    cn cn_arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter values for complex %d\n", i + 1);
        printf("real:");
        scanf("%d", &cn_arr[i].real);
        fflush(stdin);
        printf("img:");
        scanf("%s", &cn_arr[i].imaginary);
        fflush(stdin);
    }
    for (int j = 0; j < 5; j++)
    {
        display(cn_arr[j]);
    }
    return 0;
}