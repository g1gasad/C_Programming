#include <stdio.h>

struct employee{
    int id;
    char name[10];
    float salary;
};

int main(){
    struct employee e1 = {69, "Asad", 34.34};
    struct employee *ptr;
    ptr = &e1;

    printf("%d - %s_%f\n", e1.id, e1.name, e1.salary);

    // printf("%d", (*ptr).id);
    printf("%d", ptr->id); //Exactly same as above

    return 0;
}