#include <stdio.h>

int func_a() {
int a = 1;
int b = a+3;
printf("the value of a is %d\nthe value of b is %d\n", a, b);
return 0;
}

int func_b() {
    char dt = 'd';
    printf("the string is %c", dt);
    return 0;
}

int main(){
    func_a();
    func_b();
}