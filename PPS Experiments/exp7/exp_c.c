#include <stdio.h>

typedef struct student{
    int stats;
    int daag;
    int seng;
    int cao;
} stu;
int main(){
    stu asad;
    stu* ptr = &asad;
    asad.stats = 90;
    asad.daag = 90;
    asad.seng = 90;
    asad.cao = 90;

    printf("stats marks: %d\n", asad.stats);
    asad.stats = 40;
    printf("stats marks: %d\n", asad.stats);
    return 0;
}