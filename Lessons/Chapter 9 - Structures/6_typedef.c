#include <stdio.h>

typedef struct employee
{
    int id;
    char name[10];
    float salary;
} Emp;

void show(struct employee x)
{
    printf("id: %d\n", x.id);
    printf("name: %s\n", x.name);
    printf("name: %f", x.salary);
}
int main()
{
    // typedef struct employee Emp;
    Emp e1 = {69, "asad", 34.23};
    show(e1);
    return 0;
}