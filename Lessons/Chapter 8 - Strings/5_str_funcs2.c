#include <stdio.h>
#include <string.h>
/*
strcmp func returns -1, 0, 1 based on what initial char comes first in ASCII table
  0: if both are equal
  1: if str2 comes first
 -1: if str1 comes first
*/
int main(){
    char str1[] = "zAsad Ahsan"; 
    char str2[] = "gigasad";

    int comp = strcmp(str1, str2); // ab is negative
    printf("%d", comp);

    return 0;
}