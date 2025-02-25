#include <stdio.h>

struct vector{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;
    return v3;
};

int main(){
    struct vector v1, v2;
    v1.i = 2; v1.j = 9;
    v2.i = 4; v2.j = 1;
    // printf("%di %dj", v1.i, v1.j);
    printf("%di %dj", sumVector(v1, v2).i, sumVector(v1, v2).j);
    return 0;
}