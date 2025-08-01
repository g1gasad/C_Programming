#include <stdio.h>
#include <string.h>

struct student{
    int rollno;
    char name[4];
    float cgpa;
};

int main(){
    struct student asad = {69, "Asad", 6.4};
    printf("%d\n", &asad.rollno);
    printf("%d\n", &asad.name);
    printf("%d", &asad.cgpa);
    return 0;
}