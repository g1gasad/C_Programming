#include <stdio.h>

typedef struct employee
{
    int id;
    char name[10];
    float salary;
} Emp;

void show(Emp *ptr)
{
    printf("id: %d\n", ptr->id);
    printf("name: %s\n", ptr->name);
    printf("name: %f", ptr->salary);
}
int main()
{
    // typedef struct employee Emp;
    Emp e1 = {69, "asad", 34.23};
    Emp *ptr = &e1;
    show(ptr);
    return 0;
}