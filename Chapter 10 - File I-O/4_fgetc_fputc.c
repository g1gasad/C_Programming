#include <stdio.h>

int main(){
    FILE *fptr;
    // fptr = fopen("asad.txt", "r");
    // fptr = fopen("asad.txt", "w");
    fptr = fopen("asad.txt", "a ");
    if (fptr != NULL){
        // fgetc will give you the first char found from the file
        // char c = fgetc(fptr);
        // printf("%c", c);

        char c = 'W';
        fputc(c, fptr);

        fclose(fptr);
    }
    return 0;
}