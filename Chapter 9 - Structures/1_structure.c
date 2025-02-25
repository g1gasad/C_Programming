#include <stdio.h>
#include <string.h>
struct employee{
    int ID;
    char name[10];
    float salary;
};

int main(){
    struct employee e1, e2;
    strcpy(e1.name, "Asad");
    e1.ID = 69;
    e1.salary = 150.34;

    printf("%d - %s (%f)", e1.ID, e1.name, e1.salary);
    return 0;
}