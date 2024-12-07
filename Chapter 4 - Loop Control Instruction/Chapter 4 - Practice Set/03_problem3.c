// 3. A do while loop is executed:
// a. At least once. --- Correct Answer
// b. At least twice.
// c. At most once.
#include <stdio.h>

int main(){
    int i=9;
    do{
        printf("here I is %d\n", i);
        i++;
    }
    while (i < 16);

    return 0;
}