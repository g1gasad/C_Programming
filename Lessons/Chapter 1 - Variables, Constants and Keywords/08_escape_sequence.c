#include<stdio.h>
int main(){
    printf("Hello\nWorld");
    // creates a new line
    printf("\nHello\tWorld");
    // adds a horizontal tab space
    printf("\nHello\\World");
    // treats second backslash as string
    printf("\nHello\"World");
    // treats " as string
    printf("\nHello\bWorld");
    // deletes one character before backslash b
    printf("\nHello\vWorld");
    // adds a vertical tab space(idk what that is)
    printf("\nHello\0World");
    // Null character (used to terminate strings)
    return 0; 
};