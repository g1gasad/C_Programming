#include <stdio.h>

struct student{
    int stats;
    int daag;
    int seng;
    int cao;
};
int main(){
    struct student asad;
    asad.stats = 90;
    asad.daag = 90;
    asad.seng = 90;
    asad.cao = 90;

    int total = asad.stats + asad.daag + asad.seng + asad.cao;
    float percentage = (total / 400.0) * 100;

    printf("Total marks: %d\n", total);
    printf("Percen: %.2f%%", percentage);
    return 0;
}