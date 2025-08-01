#include <stdio.h>

int main(){
    char name[] = "Asad Ahsan";
    char gender = 'M';
    char branch[] = "ENCS - 3rd";
    int rollno = 69;
    float percentage = 94.32;

    printf("Students' name: %s\n", name);
    printf("Gender: %c\n", gender);
    printf("Branch and Semester: %s\n", branch);
    printf("Roll Number: %d\n", rollno);
    printf("Previous Exam Result: %.2f%%\n", percentage);
    return 0;
}