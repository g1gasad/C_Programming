#include <stdio.h>
#include <string.h>

struct en_branch{
    int rollno;
    char name[10];
    float cgpa;
};

int main(){
    struct en_branch ecsb[10], ecsa[5];

    ecsb[0].rollno = 69;
    strcpy(ecsb[0].name, "Asad");
    ecsb[0].cgpa = 7.5;

    ecsb[1].rollno = 18;
    strcpy(ecsb[1].name, "Ahad");
    ecsb[1].cgpa = 7.2;

    ecsa[0].rollno = 19;
    strcpy(ecsa[0].name, "Alex");
    ecsa[0].cgpa = 4.5;
    
    ecsa[1].rollno = 77;
    strcpy(ecsa[1].name, "Jon");
    ecsa[1].cgpa = 9.2;

    printf("%d - %s (%f)\n", ecsb[0].rollno, ecsb[0].name, ecsb[0].cgpa);
    printf("%d - %s (%f)\n", ecsb[1].rollno, ecsb[1].name, ecsb[1].cgpa);
    printf("%d - %s (%f)\n", ecsa[0].rollno, ecsa[0].name, ecsa[0].cgpa);
    printf("%d - %s (%f)\n", ecsa[1].rollno, ecsa[1].name, ecsa[1].cgpa);

    return 0;
}