#include <stdio.h>

struct employee
{
    int id;
    char name[10];
};

void show(struct employee x)
{
    printf("id: %d\n", x.id);
    printf("name: %s", x.name);
}

int main()
{
    struct employee e1 = {69, "Asad"};
    show(e1);
    return 0;
}