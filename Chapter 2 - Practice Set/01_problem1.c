#include <stdio.h>

int main(){
    int func_a(){
    int a = 1; int b = a+3;
    printf("the value of a is %d\nthe value of b is %d\n", a, b);
    return 0;
    };
    char func_b(){
        char dt = 'd';
        printf("the string is %c", dt);
        return 0;
    }
    func_b();
    // func_a();
}